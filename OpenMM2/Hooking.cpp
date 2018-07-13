#include "stdafx.h"
#include "Hooking.h"

#define MEM_IMPLEMENTATION
#include "mem/mem.h"

namespace hook
{
    inline void write_protected(mem::pointer dest, mem::pointer src, size_t length)
    {
        dest.as<mem::region>(length).unprotect().copy(src);
    }

    const char* const HookTypeNames[static_cast<size_t>(HookType::COUNT)] =
    {
        "JMP",
        "CALL",
    };

    void create_hook(const char* name, const char* description, mem::pointer pHook, mem::pointer pDetour, HookType type)
    {
        std::intptr_t RVA = pDetour.as<std::intptr_t>() - pHook.add(5).as<std::intptr_t>();

        switch (type)
        {
        case HookType::JMP:
        {
            unsigned char buffer[5] = { 0xE9 };
            reinterpret_cast<int&>(buffer[1]) = RVA;

            mem::region(pHook, sizeof(buffer)).unprotect().copy(buffer);
        } break;

        case HookType::CALL:
        {
            unsigned char buffer[5] = { 0xE8 };
            reinterpret_cast<int&>(buffer[1]) = RVA;

            mem::region(pHook, sizeof(buffer)).unprotect().copy(buffer);
        } break;
        }

        Displayf(
            "Created %s %s hook at 0x%X pointing to 0x%X - %s",
            name,
            HookTypeNames[static_cast<size_t>(type)],
            pHook.as<std::uintptr_t>(),
            pDetour.as<std::uintptr_t>(),
            description
        );
    }

    void create_patch(const char* name, const char* description, mem::pointer dest, mem::pointer src, size_t size)
    {
        mem::region(dest, size).unprotect().copy(src);

        Displayf(
            "Created %s patch at 0x%X of size %zu - %s",
            name,
            dest.as<std::uintptr_t>(),
            size,
            description
        );
    }
}
