#include "stdafx.h"
#include "datArgParser.h"

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

void datArgParser::Init(int argc, char ** argv)
{
    return stub<cdecl_t<void, int, char**>>(0x4C5BC0, argc, argv);
}

void datArgParser::Kill(void)
{
    return stub<cdecl_t<void>>(0x4C6110);
}
