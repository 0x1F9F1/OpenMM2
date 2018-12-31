#include "stdafx.h"
#include "zipFile.h"
#include "Stream.h"
#include "datArgParser.h"
#include "datAssetManager.h"
#include "Timer.h"

#include <zlib/zlib.h>

struct zipHandle
{
    zipFile *pZipFile {nullptr};
    zipEntry *pZipEntry {nullptr};
    uint32_t CurrentOffset {0};
    uint32_t CurrentRawDataSize {0};
    z_stream Inflater {};
};

static_var(0x6B4218, zipHandle[16], ZipHandles);
static_var(0x6B4204, const coreFileMethods *, zipFileOpenMethods);
static_var(0x5DA768, const coreFileMethods, zipFileMethods);

void zipAutoInit(void)
{
    if (datArgParser::Exists("logopen"))
    {
        zipFile::sm_LogOpen = 1;
    }

    const char* archiveName = nullptr;

    if (datArgParser::Get("archive", 0, archiveName))
    {
        zipFile* file = new zipFile();

        if (file->Init(archiveName))
        {
            datAssetManager::SetPath("");
        }
        else
        {
            delete file;
        }
    }
}

void zipMultiAutoInit(char const * extension)
{
    if (datArgParser::Exists("logopen"))
    {
        zipFile::sm_LogOpen = true;
    }

    char stringBuffer[MAX_PATH];

    strcpy_s(stringBuffer, datAssetManager::sm_Path);
    strcat_s(stringBuffer, extension);

    char* fileList[256];

    WIN32_FIND_DATA fileData;
    memset(&fileData, 0, sizeof(fileData));
    HANDLE hFindFile = FindFirstFileA(stringBuffer, &fileData);

    size_t fileCount = 0;

    if (hFindFile != INVALID_HANDLE_VALUE)
    {
        do
        {
            strcpy_s(stringBuffer, datAssetManager::sm_Path);
            strcat_s(stringBuffer, fileData.cFileName);

            if (_strupr_s(stringBuffer) == NO_ERROR)
            {
                fileList[fileCount++] = _strdup(stringBuffer);
            }
            else
            {
                Warningf("That's one funky filename: %s", stringBuffer);
            }

        } while (fileCount != 256 && FindNextFileA(hFindFile, &fileData));

        FindClose(hFindFile);
    }

    std::sort(fileList, fileList + fileCount, [](char* lhs, char* rhs)
    {
        return strcmp(lhs, rhs) < 0;
    });

    for (size_t i = fileCount; i--;)
    {
        char* fileName = fileList[i];

        zipFile* file = new zipFile();

        if (file->Init(fileName))
        {
            datAssetManager::SetPath("");
        }
        else
        {
            delete file;
        }

        free(fileName);
    }
}
 
#pragma pack(push, 1)
struct DAVEHEADER
{
    uint32_t FileCount;
    uint32_t NamesOffset;
    uint32_t NamesSize;
};

check_size(DAVEHEADER, 0xC);

struct ZIPENDLOCATOR
{
    uint16_t DiskNumber;
    uint16_t StartDiskNumber;
    uint16_t FileCount;
    uint16_t FilesInDirectory;
    uint32_t DirectorySize;
    uint32_t DirectoryOffset;
};

check_size(ZIPENDLOCATOR, 0x10);

struct ZIPDIRENTRY
{
    uint16_t VersionMadeBy;
    uint16_t VersionToExtract;
    uint16_t Flags;
    uint16_t CompressionMethod;
    uint16_t FileTime;
    uint16_t FileDate;
    uint32_t Crc;
    uint32_t CompressedSize;
    uint32_t UncompressedSize;
    uint16_t NameLength;
    uint16_t ExtraLength;
    uint16_t CommentLength;
    uint16_t DiskNumberStart;
    uint16_t InternalAttributes;
    uint32_t ExternalAttributes;
    uint32_t RecordOffset;
};

check_size(ZIPDIRENTRY, 0x2A);
#pragma pack(pop)

bool zipFile::Init(char const * fileName)
{
    if (zipFileOpenMethods == nullptr)
    {
        zipFileOpenMethods = std::exchange(Stream::sm_DefaultOpenMethods, &zipFileMethods);
    }

    Stream* stream = Stream::Open(fileName, zipFileOpenMethods, true);

    if (stream == nullptr)
    {
        return false;
    }

    Timer startTime;

    uint32_t magic;

    if (stream->Read(magic) && (magic == 0x45564144)) // DAVE
    {
        Displayf("'%s' is optimized archive.", fileName);

        DAVEHEADER daveHeader = stream->Read<DAVEHEADER>();

        stream->Seek(2048);

        EntryCount = daveHeader.FileCount;
        Entries = std::make_unique<zipEntry[]>(EntryCount);

        if (!stream->ReadArray(Entries.get(), EntryCount))
        {
            Errorf("%s: Failed to read entries.", fileName);
        }

        stream->Seek(2048 + daveHeader.NamesOffset);

        NamesBuffer = std::make_unique<char[]>(daveHeader.NamesSize);

        if (!stream->ReadArray(NamesBuffer.get(), daveHeader.NamesSize))
        {
            Errorf("%s: Failed to read names.", fileName);
        }

        for (uint32_t i = 0; i < EntryCount; ++i)
        {
            Entries[i].Name += (uintptr_t) NamesBuffer.get();
        }

        // TODO: Load checksum (.CHK) file.

        goto SUCCESS;
    }

    stream->Seek(stream->Size() - 0x16);

    if (stream->Read(magic) && (magic == 0x06054B50)) // ZIPENDLOCATOR
    {
        ZIPENDLOCATOR endLocator = stream->Read<ZIPENDLOCATOR>();

        if (endLocator.DiskNumber != endLocator.StartDiskNumber)
        {
            Warningf("%s: Multi-part zipfiles not supported.", fileName);

            goto FAILURE;
        }

        EntryCount = endLocator.FileCount;
        Entries = std::make_unique<zipEntry[]>(EntryCount);

        uint32_t namesBufferLength = endLocator.DirectorySize - (0x2D * EntryCount);

        NamesBuffer = std::make_unique<char[]>(namesBufferLength);

        stream->Seek(endLocator.DirectoryOffset);

        uint32_t totalFiles = 0;
        uint32_t totalNamesLength = 0;

        while (stream->Read(magic) && (magic == 0x02014B50)) // ZIPDIRENTRY
        {
            if (totalFiles < EntryCount)
            {
                ZIPDIRENTRY dirEntry = stream->Read<ZIPDIRENTRY>();

                if (dirEntry.CompressionMethod != 0 && dirEntry.CompressionMethod != 8)
                {
                    Warningf("%s: Compression method besides store or deflate encountered.", fileName);

                    goto FAILURE;
                }

                if ((totalNamesLength + dirEntry.NameLength + 1) > namesBufferLength)
                {
                    Errorf("%s: Names buffer overflow", fileName);

                    goto FAILURE;
                }

                char* nameBuffer = &NamesBuffer[totalNamesLength];
                stream->Read(nameBuffer, dirEntry.NameLength);
                nameBuffer[dirEntry.NameLength] = '\0';

                totalNamesLength += strlen(nameBuffer) + 1;

                uint32_t dataOffset = dirEntry.RecordOffset + 30 + dirEntry.NameLength;

                if ((dataOffset + dirEntry.CompressedSize) > (uint32_t) stream->Size())
                {
                    Errorf("%s: %s overflows file", fileName, nameBuffer);

                    goto FAILURE;
                }

                stream->Seek(dirEntry.ExtraLength + dirEntry.CommentLength, SeekCurrent);

                zipEntry* entry = &Entries[totalFiles];

                entry->Name = nameBuffer;
                entry->Data = dataOffset;
                entry->UncompresedSize = dirEntry.UncompressedSize;
                entry->CompressedSize = dirEntry.CompressedSize;
            }

            ++totalFiles;
        }

        if (totalFiles > EntryCount)
        {
            Warningf("%s: %u File overflow.", fileName, totalFiles - EntryCount);
        }
        else if (totalFiles < EntryCount)
        {
            Warningf("%s: %u File underflow.", fileName, EntryCount - totalFiles);

            EntryCount = totalFiles;
        }

        Displayf(
            "%s: %d files in central directory (%d bytes + %d(%d) string heap).",
            fileName,
            totalFiles,
            totalFiles * sizeof(zipEntry),
            totalNamesLength,
            namesBufferLength);

        std::sort(Entries.get(), Entries.get() + EntryCount, [ ] (const zipEntry& lhs, const zipEntry& rhs)
        {
            return strcmp(lhs.Name, rhs.Name) < 0;
        });

        goto SUCCESS;
    }

    return false;

SUCCESS:
    Displayf("%s: %f seconds to read directory", fileName, startTime.ElapsedSeconds());

    stream->Close();

    CurrentOffset = 0;

    FileHandle = zipFileOpenMethods->Open(fileName, 1);

    return true;

FAILURE:
    stream->Close();

    return false;
}

int CompareZipEntries(const void *a1, const void *a2)
{
    const char* v2 = static_cast<const char*>(a1);
    const char* v3 = static_cast<const zipEntry*>(a2)->Name;

    signed int v4;
    signed int v5;

    do
    {
        v4 = *v2++;
        v5 = *v3++;

        if (v4 >= 'A' && v4 <= 'Z')
            v4 += 0x20;
        else if (v4 == '\\')
            v4 = '/';

        if (v5 >= 'A' && v5 <= 'Z')
            v5 += 0x20;
        else if (v5 == '\\')
            v5 = '/';
    }
    while ( v4 && v4 == v5 );

    return v4 - v5;
}

int zipFile::Open(char const * fileName)
{
    zipEntry* entry = (zipEntry*) std::bsearch(fileName, Entries.get(), EntryCount, sizeof(zipEntry), &CompareZipEntries);

    if (entry)
    {
        for (int i = 0; i < 16; ++i)
        {
            if (ZipHandles[i].pZipEntry == nullptr)
            {
                zipHandle* handle = &ZipHandles[i];

                handle->pZipFile = this;
                handle->pZipEntry = entry;
                handle->CurrentRawDataSize = 0;
                handle->CurrentOffset = 0;

                if (entry->UncompresedSize != entry->CompressedSize)
                {
                    handle->Inflater.next_in = 0;
                    handle->Inflater.avail_in = 0;

                    if (inflateInit2(&handle->Inflater, -15) != Z_OK)
                    {
                        Errorf("zipFile::Open(%s) - inflateInit failed.", fileName);
                    }
                }

                return i;
            }
        }
    }

    return -1;
}

int zipFile::EnumFiles2(const char * path, void(*callback)(Stream* stream, void *context), void * context)
{
    int count = 0;

    for (zipFile* i = sm_First; i; i = i->PrevFile)
    {
        int handle = i->Open(path);

        if (handle != -1)
        {
            Stream* stream = Stream::AllocStream(path, handle, &zipFileMethods);

            callback(stream, context);
            
            stream->Close();

            ++count;
        }
    }

    return count;
}

zipFile::zipFile()
    : PrevFile(sm_First)
    , FileHandle(-1)
    , NamesBuffer(nullptr)
    , FileCrcs(nullptr)
    , Entries(nullptr)
    , EntryCount(0)
    , CurrentOffset(0)
{
    sm_First = this;
}

zipFile::~zipFile()
{
    if (FileHandle != 0xFFFFFFFF && zipFileOpenMethods)
    {
        zipFileOpenMethods->Close(FileHandle);
    }

    zipFile::sm_First = PrevFile;
}

run_once([ ]
{
    hook::create_hook("inflateInit2_", "Update ZLIB", 0x573D00, &inflateInit2_, HookType::JMP);
    hook::create_hook("inflateReset", "Update ZLIB", 0x573C60, &inflateReset, HookType::JMP);
    hook::create_hook("inflateEnd", "Update ZLIB", 0x573CB0, &inflateEnd, HookType::JMP);
    hook::create_hook("inflate", "Update ZLIB", 0x573E40, &inflate, HookType::JMP);
})