#pragma once

enum class HookType
{
    JMP,
    CALL,

    COUNT,
};

namespace hook
{
    void create_hook(const char* name, const char* description, mem::pointer target, mem::pointer detour, HookType type);
    void create_patch(const char* name, const char* description, mem::pointer dest, mem::pointer src, size_t size);
}