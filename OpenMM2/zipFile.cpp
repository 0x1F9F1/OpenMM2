#include "stdafx.h"
#include "zipFile.h"
#include "Stream.h"
#include "datArgParser.h"
#include "datAssetManager.h"
#include "Timer.h"

defnvar(0x6B4698, zipFile::sm_First);
defnvar(0x6B4208, zipFile::sm_LogOpen);
instvar(0x6B4218, zipHandle[16], ZipHandles);
instvar(0x6B4204, coreFileMethods *, pRawFileMethods);

instvar(0x5DA768, coreFileMethods, zipFileMethods);

void* zcalloc(void * opaque, uint32_t items, uint32_t size)
{
    return stub<cdecl_t<void*, void*, uint32_t, uint32_t>>(0x574580, opaque, items, size);
}

void zcfree(void * opaque, void * ptr)
{
    return stub<cdecl_t<void, void*, void*>>(0x5745A0, opaque, ptr);
}

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
        zipFile::sm_LogOpen = 1;
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
 
bool zipFile::Init(char const * fileName)
{
    if (pRawFileMethods == nullptr)
    {
        pRawFileMethods = std::exchange(ReadOnlyFileMethods, &zipFileMethods);
    }

    Stream* stream = Stream::Open(fileName, pRawFileMethods, true);

    if (stream == nullptr)
    {
        return false;
    }

    Timer startTime;

    uint32_t magic;

    if (stream->Read(magic) && (magic == 0x45564144)) // DAVE
    {
        Displayf("'%s' is optimized archive.", fileName);

        uint32_t fileCount = stream->Read<uint32_t>();
        uint32_t entriesSize = stream->Read<uint32_t>(); // namesOffset

        if (entriesSize != (fileCount * sizeof(zipEntry)))
        {
            // Errorf("'%s' is fishy.", fileName);
        }

        uint32_t namesSize = stream->Read<uint32_t>();

        stream->Seek(2048);

        EntryCount = fileCount;
        Entries = new zipEntry[EntryCount];

        if (!stream->ReadArray(Entries, EntryCount))
        {
            Errorf("%s: Failed to read entries.", fileName);
        }

        stream->Seek(2048 + entriesSize);

        NamesBuffer = new char[namesSize];

        if (!stream->ReadArray(NamesBuffer, namesSize))
        {
            Errorf("%s: Failed to read names.", fileName);
        }

        for (int i = 0; i < EntryCount; ++i)
        {
            Entries[i].Name += (uintptr_t) NamesBuffer;
        }

        // TODO: Load checksum (.CHK) file.

        goto SUCCESS;
    }

    stream->Seek(stream->Size() - 0x16);

    if (stream->Read(magic) && (magic == 0x06054B50)) // ZIPENDLOCATOR
    {
        uint16_t diskNumber = stream->Read<uint16_t>();
        uint16_t startDiskNumber = stream->Read<uint16_t>();

        if (diskNumber != startDiskNumber)
        {
            Warningf("%s: Multi-part zipfiles not supported.", fileName);

            goto FAILURE;
        }

        uint16_t fileCount = stream->Read<uint16_t>();
        /*uint16_t filesInDirectory = */stream->Read<uint16_t>();
        uint32_t directorySize = stream->Read<uint32_t>();
        uint32_t directoryOffset = stream->Read<uint32_t>();

        EntryCount = fileCount;
        Entries = new zipEntry[EntryCount];

        int namesBufferLength = directorySize - (0x2D * EntryCount);

        NamesBuffer = new char[namesBufferLength];

        stream->Seek(directoryOffset);

        int totalFiles = 0;
        int totalNamesLength = 0;

        while (stream->Read(magic) && (magic == 0x02014B50)) // ZIPDIRENTRY
        {
            if (totalFiles < EntryCount)
            {
                /*uint16_t versionMadeBy = */stream->Read<uint16_t>();
                /*uint16_t versionToExtract = */stream->Read<uint16_t>();
                /*uint16_t flags = */stream->Read<uint16_t>();

                uint16_t compressionMethod = stream->Read<uint16_t>();

                if (compressionMethod != 0 && compressionMethod != 8)
                {
                    Warningf("%s: Compression method besides store or deflate encountered.", fileName);

                    goto FAILURE;
                }

                /*uint16_t fileTime = */stream->Read<uint16_t>();
                /*uint16_t fileDate = */stream->Read<uint16_t>();
                /*uint32_t crc = */stream->Read<uint32_t>();

                int compressedSize = stream->Read<int>();
                int uncompressedSize = stream->Read<int>();

                if (compressedSize < 0 || uncompressedSize < 0)
                {
                    Warningf("%s: Negative size.", fileName);

                    goto FAILURE;
                }

                uint16_t nameLength = stream->Read<uint16_t>();
                uint16_t extraLength = stream->Read<uint16_t>();
                uint16_t commentLength = stream->Read<uint16_t>();

                /*uint16_t diskNumberStart = */stream->Read<uint16_t>();

                /*uint16_t internalAttributes = */stream->Read<uint16_t>();
                /*uint32_t externalAttributes = */stream->Read<uint32_t>();

                uint32_t recordOffset = stream->Read<uint32_t>();

                char nameBuffer[128];
                if (!stream->ReadArray(nameBuffer, nameLength))
                {
                    Errorf("%s: Failed to read file name.", fileName);

                    goto FAILURE;
                }

                nameBuffer[nameLength] = '\0';

                if (extraLength > 256)
                {
                    Errorf("%s: Attempted to buffer overflow extra buffer (%u) on %s", fileName, extraLength, nameBuffer);

                    goto FAILURE;
                }

                char extraBuffer[256];
                if (!stream->ReadArray(extraBuffer, extraLength))
                {
                    Errorf("%s: Failed to read extra on %s", fileName, nameBuffer);

                    goto FAILURE;
                }

                if (commentLength > 256)
                {
                    Errorf("%s: Attempted to buffer overflow comment buffer (%u) on %s", fileName, commentLength, nameBuffer);

                    goto FAILURE;
                }

                char commentBuffer[256];
                if (!stream->ReadArray(commentBuffer, commentLength))
                {
                    Errorf("%s: Failed to read comment on %s", fileName, nameBuffer);

                    goto FAILURE;
                }

                if ((totalNamesLength + nameLength) > namesBufferLength)
                {
                    Errorf("%s: Attempted to buffer overflow names buffer on %s", fileName, nameBuffer);

                    goto FAILURE;
                }

                int dataOffset = recordOffset + 30 + nameLength;

                if ((dataOffset + compressedSize) > stream->Size())
                {
                    Errorf("%s: Attempted to buffer overflow data buffer on %s", fileName, nameBuffer);

                    goto FAILURE;
                }

                zipEntry* entry = &Entries[totalFiles];

                entry->Name = &NamesBuffer[totalNamesLength];
                entry->Data = dataOffset;
                entry->UncompresedSize = uncompressedSize;
                entry->CompressedSize = compressedSize;

                memcpy(&NamesBuffer[totalNamesLength], nameBuffer, nameLength + 1);

                totalNamesLength += nameLength + 1;
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

        std::sort(Entries, Entries + EntryCount, [ ] (const zipEntry& lhs, const zipEntry& rhs)
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

    FileHandle = pRawFileMethods->Open(fileName, 1);

    return true;

FAILURE:
    stream->Close();

    return false;
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
    if (NamesBuffer)
    {
        delete NamesBuffer;
    }

    if (FileCrcs)
    {
        delete FileCrcs;
    }

    if (Entries)
    {
        delete Entries;
    }

    if (FileHandle != 0xFFFFFFFF && pRawFileMethods)
    {
        pRawFileMethods->Close(FileHandle);
    }

    zipFile::sm_First = PrevFile;
}
