#pragma once

#include "asNode.h"
#include "Vector.h"

class gfxBitmap;
class uiWidget;

class sfPointer
    : public asNode
{
    gfxBitmap *CursorBitmap;
    Vector2 CurrentX;
    Vector2 PrevX;
    uint32_t ScreenW;
    uint32_t ScreenH;
    uint32_t dword34;
    uint32_t dword38;
    uint32_t State;
    Vector2 dword40;
    uiWidget *SelectedWidget;
};

check_size(sfPointer, 0x4C);