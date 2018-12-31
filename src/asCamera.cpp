#include "stdafx.h"
#include "asCamera.h"

#include "gfxRenderState.h"

void asCamera::Update()
{
    return stub<member_func_t<void, asCamera>>(0x4A24A0, this);
}

void asCamera::DrawBegin()
{
    gfxRenderState::SetCamera(matrix34D4);
}

void asCamera::DrawEnd()
{
    if (dword14C != 0.0 || dword154 != 0.0 || dword148 == 1 || dword168 > 0)
    {
        dword148 = 0;

        if (dword168)
        {
            dword168 -= 1;
        }
    }
}
