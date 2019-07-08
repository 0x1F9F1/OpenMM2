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

#include "rstate.h"

#include "d3dpipe.h"
#include "winpriv.h"

void gfxRenderState::SetCamera(const Matrix34& camera)
{
    sm_Camera = camera;

    SetCamera(sm_Camera);
}

void gfxRenderState::SetCamera(const Matrix44& camera)
{
    sm_Camera = camera;

    sm_View.FastInverse(sm_Camera);
    sm_View.Dot(sm_FullComposite);

    SetTransform(TransformState_View, sm_View);
}

void gfxRenderState::SetTransform(int index, const Matrix44& transform)
{
    lpD3DDev->SetTransform(static_cast<D3DTRANSFORMSTATETYPE>(index), LPD3DMATRIX(&transform));

    m_Touched |= TouchMask_Regenerate;
}

void gfxRenderState::Flush()
{
    if (m_Touched & m_TouchedMask)
    {
        DoFlush(&LASTRSTATE);
    }
}

void gfxRenderState::SetTexture(int index, gfxTexture* texture)
{
    if (index > 1)
    {
        Quitf("Invalid Texture Index");
    }

    if (m_Texture[index] != texture)
    {
        m_Texture[index] = texture;

        m_Touched |= TouchMask_Texture;
    }
}

run_once([] {
    auto_hook_typed(0x4B2970, gfxRenderState::SetCamera, void (*)(const Matrix34&));
    auto_hook_typed(0x4B2A20, gfxRenderState::SetCamera, void (*)(const Matrix44&));
    auto_hook(0x4B4C40, gfxRenderState::DoFlush);
});
