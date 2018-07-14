#pragma once

#include <d3d.h>

enum gfxDeviceType : uint32_t
{
    gfxDeviceType_Software = 0, // Software (No 3D Video Card)
    gfxDeviceType_Hardware = 1, // Hardware (3D Video Card)
    gfxDeviceType_HardwareWithTnL = 2  // Hardware (3D Video Card With T&L)
};

enum gfxDepthFlags : uint32_t
{
    gfxDepthFlag_Depth16 = 0x400,
    gfxDepthFlag_Depth24 = 0x200,
    gfxDepthFlag_Depth32 = 0x100
};

struct gfxResData
{
    uint16_t ScreenWidth;
    uint16_t ScreenHeight;
    uint16_t ColorDepth;
    uint16_t Flags; // = 0b110 | (ColorDepth == 16)
};

struct gfxInterface
{
    GUID GUID;
    char Name[64];

    uint32_t DeviceCaps;

    gfxDeviceType DeviceType;

    uint32_t ResolutionCount;   // Max of 64 resolutions
    uint32_t ResolutionChoice;

    gfxDepthFlags AcceptableDepths;  // Used to check if mmResolution::Depth is allowed

    uint32_t AvailableMemory;
    uint32_t VendorID;
    uint32_t DeviceID;

    gfxResData Resolutions[64];

    gfxResData* CurrentResolution();

    static gfxInterface* Current();
};

check_size(gfxInterface, 0x270);

declvar(gfxInterface[8], gfxInterfaces);
declvar(int, gfxInterfaceCount);
declvar(int, gfxInterfaceChoice);