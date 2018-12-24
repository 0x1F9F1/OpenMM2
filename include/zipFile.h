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

    decl_static(zipFile *, sm_First);
    decl_static(bool, sm_LogOpen);

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
    zipFile *pZipFile {nullptr};
    zipEntry *pZipEntry {nullptr};
    uint32_t CurrentOffset {0};
    uint32_t CurrentRawDataSize {0};
    z_stream Inflater {};
};

int inflateInit2_(z_stream * strm, int windowBits, const char * version, int stream_size);