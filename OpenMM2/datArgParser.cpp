#include "stdafx.h"
#include "datArgParser.h"

defnvar(0x6A3C10, datArgParser::ArgHash);
defnvar(0x6A3C30, datArgParser::Argc);
defnvar(0x6A3C28, datArgParser::Argv);

struct ArgEntry
{
    uint32_t WordCount;
    char **Words;

    ArgEntry()
        : WordCount(0)
        , Words(nullptr)
    { }
};

bool datArgParser::Exists(const char * name)
{
    return stub<cdecl_t<bool, const char*>>(0x4C6190, name);
}

bool datArgParser::Get(const char * name, uint32_t index, int & out)
{
    return stub<cdecl_t<bool, const char*, uint32_t, int&>>(0x4C61C0, name, index, out);
}

bool datArgParser::Get(const char * name, uint32_t index, float & out)
{
    return stub<cdecl_t<bool, const char*, uint32_t, float&>>(0x4C6210, name, index, out);
}

bool datArgParser::Get(const char * name, uint32_t index, const char *& out)
{
    return stub<cdecl_t<bool, const char*, uint32_t, const char*&>>(0x4C6260, name, index, out);
}

void datArgParser::Init()
{
}

void datArgParser::Init(int argc, char ** argv)
{
    datArgParser::Argc = argc;
    datArgParser::Argv = argv;

    if (argv)
    {
        for (int i = 0; i < argc;)
        {
            char* currentArg = argv[i];

            if ((*currentArg == '-') && !ArgHash.Access(currentArg + 1))
            {
                char* argValue = strchr(currentArg, '=');

                ArgEntry* argEntry = new ArgEntry();

                argEntry->WordCount = argValue != nullptr;

                int nextArgIndex = i + 1;

                for (; nextArgIndex < argc; ++nextArgIndex)
                {
                    char* nextArg = argv[nextArgIndex];

                    if (nextArg[0] == '-')
                    {
                        char nextChar = nextArg[1];

                        if (nextChar < '0' || nextChar > '9')
                        {
                            break;
                        }
                    }

                    ++argEntry->WordCount;
                }

                if (argValue)
                {
                    *argValue = 0;

                    argv[i] = argValue + 1;
                }

                ArgHash.Insert(argv[i] + 1, argEntry);

                uint32_t argIndex = argValue == 0;

                argEntry->Words = new char*[argEntry->WordCount];

                for (uint32_t j = 0; j < argEntry->WordCount; ++j)
                {
                    argEntry->Words[j] = argv[i + argIndex + j];
                }

                i = nextArgIndex;
            }
            else
            {
                ++i;
            }
        }
    }

    ArgHash.MakePermanent();
}

void datArgParser::Kill(void)
{
    return stub<cdecl_t<void>>(0x4C6110);
}
