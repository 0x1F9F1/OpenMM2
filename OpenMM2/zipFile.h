#pragma once

void zipAutoInit(void);
void zipMultiAutoInit(char const * extension);

struct zipEntry
{
    char *Name;
    int Data;
    int UncompresedSize;
    int CompressedSize;
};

struct zipFile
{
    zipFile *PrevFile;
    int FileHandle;
    std::unique_ptr<char[]> NamesBuffer;
    std::unique_ptr<uint32_t[]> FileCrcs;
    std::unique_ptr<zipEntry[]> Entries;
    uint32_t EntryCount;
    uint32_t CurrentOffset;

    bool Init(char const * fileName);

    declstatic(zipFile *, sm_First);
    declstatic(bool, sm_LogOpen);

    zipFile();
    ~zipFile();
};

typedef void *(*alloc_func)(void *opaque, uint32_t items, uint32_t size);
typedef void(*free_func)(void *opaque, void *address);

// zlib 1.1.3
struct z_stream
{
    const uint8_t *next_in;
    uint32_t avail_in;
    uint32_t total_in;
    uint8_t *next_out;
    uint32_t avail_out;
    uint32_t total_out;
    const char *msg;
    struct internal_state *state;
    alloc_func zalloc;
    free_func zfree;
    void *opaque;
    int data_type;
    uint32_t adler;
    uint32_t reserved;
};

struct zipHandle
{
    zipFile *pZipFile;
    zipEntry *pZipEntry;
    DWORD CurrentOffset;
    DWORD CurrentRawDataSize;
    z_stream Inflater;
};