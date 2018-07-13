#pragma once

#include <d3d.h>
#include <ddraw.h>

class gfxPipeline
{
public:
    static void SetRes(int width, int height, int cdepth, int zdepth, bool parseArgs);
    static void gfxWindowCreate(const char* windowName);
    static void gfxWindowMove(bool isOpen);
    static void gfxWindowUpdate(bool isOpen);

    static void SetTitle(const char* title);

    static bool BeginGfx2D(void);
    static void EndGfx2D(void);

    static LRESULT CALLBACK gfxWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

    declstatic(float, m_fWidth);
    declstatic(float, m_fHeight);
    declstatic(int, m_iWidth);
    declstatic(int, m_iHeight);
    declstatic(int, m_ZDepth);
    declstatic(int, m_ColorDepth);
    declstatic(int, m_X);
    declstatic(int, m_Y);
};

BOOL gfxAutoDetect(BOOL* success);

void InitDirectDraw(void);

declvar(HWND, hwndParent);
declvar(HWND, hwndMain);
declvar(LPCSTR, lpWindowTitle);
declvar(ATOM, ATOM_Class);
declvar(LPCSTR, IconID);
declvar(bool, pageFlip);
declvar(bool, hasBorder);
declvar(bool, useMultiTexture);
declvar(bool, enableHWTnL);
declvar(bool, novblank);
declvar(bool, inWindow);
declvar(bool, isMaximized);
declvar(bool, tripleBuffer);
declvar(bool, useReference);
declvar(bool, useSoftware);
declvar(bool, useAgeSoftware);
declvar(bool, useBlade);
declvar(bool, useSysMem);
declvar(int, useInterface);
declvar(int, useIME);
declvar(HIMC, immContext);
declvar(decltype(&DirectDrawCreateEx), lpDirectDrawCreateEx);
declvar(IDirectDraw7 *, lpDD);
declvar(IDirect3D7 *, lpD3D);
declvar(IDirect3DDevice7 *, lpD3DDev);
declvar(IDirectDrawSurface7 *, lpdsRend);

declvar(int, gfxMinScreenWidth);
declvar(int, gfxMinScreenHeight);
declvar(int, gfxMaxScreenWidth);
declvar(int, gfxMaxScreenHeight);
declvar(int, gfxTexQuality);
declvar(int, gfxTexReduceSize);

declvar(float, ioMouse__InvWidth);
declvar(float, ioMouse__InvHeight);
