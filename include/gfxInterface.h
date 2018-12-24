#pragma once

#include <d3d.h>

enum gfxDeviceType
{
    gfxDeviceType_Software = 0, // Software (No 3D Video Card)
    gfxDeviceType_Hardware = 1, // Hardware (3D Video Card)
    gfxDeviceType_HardwareWithTnL = 2  // Hardware (3D Video Card With T&L)
};

enum gfxDepthFlags
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
    GUID GUID {};
    char Name[64] {};

    uint32_t DeviceCaps {0};

    int DeviceType {-1};

    int ResolutionCount {-1};   // Max of 64 resolutions
    int ResolutionChoice {-1};

    uint32_t AcceptableDepths {0};  // Used to check if mmResolution::Depth is allowed

    uint32_t AvailableMemory {0};
    uint32_t VendorID {0};
    uint32_t DeviceID {0};

    gfxResData Resolutions[64] {};

    gfxResData* CurrentResolution();

    static gfxInterface* Current();
};

check_size(gfxInterface, 0x270);

static_var(0x683130, gfxInterface[8], gfxInterfaces);
static_var(0x6844C0, int, gfxInterfaceCount);
static_var(0x6844C8, int, gfxInterfaceChoice);