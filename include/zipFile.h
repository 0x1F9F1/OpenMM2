#pragma once

void zipAutoInit(void);
void zipMultiAutoInit(char const * extension);

class Stream;

struct zipEntry
{
    char *Name;
    int Data;
    int UncompresedSize;
    int CompressedSize;
};

struct zipFile
{
    zipFile *PrevFile {nullptr};
    int FileHandle {-1};
    std::unique_ptr<char[]> NamesBuffer {};
    std::unique_ptr<uint32_t[]> FileCrcs {};
    std::unique_ptr<zipEntry[]> Entries {};
    uint32_t EntryCount {0};
    uint32_t CurrentOffset {0};

    bool Init(char const * fileName);

    int Open(char const * fileName);

    static int EnumFiles2(const char* path, void(*callback)(Stream* stream, void *context), void* context);

    inline_var(0x6B4698, zipFile *, sm_First);
    inline_var(0x6B4208, bool, sm_LogOpen);

    zipFile();
    ~zipFile();
};