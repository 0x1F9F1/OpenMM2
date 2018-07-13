#pragma once

#include <d3d.h>

struct gfxInterface
{
    enum gfxDeviceType
    {
        Software = 0, // Software (No 3D Video Card)
        Hardware = 1, // Hardware (3D Video Card)
        HardwareWithTnL = 2  // Hardware (3D Video Card With T&L)
    };

    enum gfxDepthFlags
    {
        Depth16 = 0x400,
        Depth24 = 0x200,
        Depth32 = 0x100
    };

    struct gfxResData
    {
        unsigned short ScreenWidth;
        unsigned short ScreenHeight;
        unsigned short ColorDepth;
        unsigned short Flags; // = 0b110 | (ColorDepth == 16)
    };

    GUID GUID;
    char Name[64];

    unsigned int DeviceCaps;

    gfxDeviceType DeviceType;

    unsigned int ResolutionCount;   // Max of 64 resolutions
    unsigned int ResolutionChoice;

    gfxDepthFlags AcceptableDepths;  // Used to check if mmResolution::Depth is allowed

    unsigned int AvailableMemory;
    unsigned int VendorID;
    unsigned int DeviceID;

    gfxResData Resolutions[64];
};

check_size(gfxInterface, 0x270);

declvar(gfxInterface[8], gfxInterfaces);
declvar(int, gfxInterfaceCount);
declvar(int, gfxInterfaceChoice);