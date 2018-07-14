#pragma once

#define MAX_STREAMS 12
#define STREAM_BUFFER_SIZE 4096

enum seekWhence
{
    SeekBegin,
    SeekCurrent,
    SeekEnd,
};

struct coreFileMethods
{
    int(*Open)(const char* fileName, bool readOnly);
    int(*Create)(const char* fileName);
    int(*Read)(int handle, void* buffer, int length);
    int(*Write)(int handle, const void* buffer, int length);
    int(*Seek)(int handle, int position, int whence);
    int(*Close)(int handle);
    int(*EnumFiles)(const char* fileName, void(*callback)(const char*, bool, void*), void* context);
    int(*Size)(int handle);
    int(*Flush)(int handle);
};

class Stream
{
public:
    const coreFileMethods * Methods;
    int Handle;
    uint8_t *Buffer;
    uint32_t CurrentFileOffset;
    uint32_t CurrentBufferOffset;
    uint32_t CurrentBufferSize;
    uint32_t BufferSize;

    int Read(void* buffer, int size);
    int Write(const void* buffer, int size);
    int GetCh(void);
    int PutCh(unsigned char ch);
    int Seek(int offset);
    int Tell(void);
    int Close(void);
    int Size(void);
    int Flush(void);

    bool ReadBytes(void* buffer, int size)
    {
        return Read(buffer, size) == size;
    }

    template <typename T>
    bool Read(T& value)
    {
        return ReadBytes(&value, sizeof(value));
    }

    template <typename T>
    T Read()
    {
        T result;

        bool success = Read(result);

#ifdef _DEBUG
        if (!success)
        {
            Errorf("Failed to read %s", typeid(T).name());
        }
#else
        (void)success;
#endif

        return result;
    }

    template <typename T>
    bool ReadArray(T* values, size_t count)
    {
        return ReadBytes(values, count * sizeof(*values));
    }

    static Stream* Open(char const * fileName, coreFileMethods const * methods, bool readOnly);
    static Stream* AllocStream(char const * fileName, int handle, coreFileMethods const * methods);

    static Stream* Open(char const * fileName, bool readOnly);

    static Stream* Create(const char* fileName);

    static void DumpOpenFiles(void);

    declstatic(Stream[MAX_STREAMS], sm_Streams);
    declstatic(uint8_t[MAX_STREAMS][STREAM_BUFFER_SIZE], sm_Buffers);
};

int fseek(Stream *stream, int position, seekWhence whence);
int fgets(char *buffer, int length, Stream *stream);
void fprintf(Stream *stream, char const *format, ...);
int fscanf(Stream *stream, char const *format, ...);

declvar(coreFileMethods*, ReadWriteFileMethods);
declvar(coreFileMethods*, ReadOnlyFileMethods);
declvar(coreFileMethods, rawFileMethods);