#include "stdafx.h"
#include "zipFile.h"
#include "Stream.h"
#include "datArgParser.h"
#include "datAssetManager.h"

defnvar(0x6B4698, zipFile::sm_First);
defnvar(0x6B4208, zipFile::sm_LogOpen);
instvar(0x6B4218, zipHandle[16], ZipHandles);
instvar(0x6B4204, coreFileMethods *, pRawFileMethods);

instvar(0x5DA768, coreFileMethods, zipFileMethods);

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
    return stub<thiscall_t<bool, zipFile, const char*>>(0x573480, this, fileName);
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
    if (FileHandle != 0xFFFFFFFF && pRawFileMethods)
    {
        pRawFileMethods->Close(FileHandle);
    }

    zipFile::sm_First = PrevFile;
}
