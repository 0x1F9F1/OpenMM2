/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "args.h"

struct ArgEntry
{
    uint32_t WordCount {0};
    char** Words {nullptr};
};

bool datArgParser::Exists(const char* name)
{
    if (!Argc)
    {
        Init();
    }

    return ArgHash.Access(name) != nullptr;
}

bool datArgParser::Get(const char* name, uint32_t index, int& out)
{
    if (!Argc)
    {
        Init();
    }

    ArgEntry* entry = (ArgEntry*) ArgHash.Access(name);

    if (entry && index < entry->WordCount)
    {
        out = atoi(entry->Words[index]);

        return true;
    }

    return false;
}

bool datArgParser::Get(const char* name, uint32_t index, float& out)
{
    if (!Argc)
    {
        Init();
    }

    ArgEntry* entry = (ArgEntry*) ArgHash.Access(name);

    if (entry && index < entry->WordCount)
    {
        out = (float) atof(entry->Words[index]);

        return true;
    }

    return false;
}

bool datArgParser::Get(const char* name, uint32_t index, const char*& out)
{
    if (!Argc)
    {
        Init();
    }

    ArgEntry* entry = (ArgEntry*) ArgHash.Access(name);

    if (entry && index < entry->WordCount)
    {
        out = entry->Words[index];

        return true;
    }

    return false;
}

void datArgParser::Init()
{
}

void datArgParser::Init(int argc, char** argv)
{
    datArgParser::Argc = argc;
    datArgParser::Argv = argv;

    if (argv)
    {
        for (int i = 1; i < argc;)
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
    datArgParser::ArgHash.Kill();
}
