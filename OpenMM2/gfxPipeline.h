#pragma once

#include <d3d.h>
#include <ddraw.h>

class gfxBitmap;

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

    static bool BeginGfx3D(void);

    static void BeginFrame(void);
    static void EndFrame(void);

    static void CopyBitmap(int destX, int destY, gfxBitmap* bitmap, int srcX, int srcY, int width, int height, bool srcColorKey);

    static void EnumDDAdapters(HMODULE hGfxLib, LPDDENUMCALLBACKA lpCallback, LPVOID lpContext);

    static void BeginScene(void);
    static void EndScene(void);

    static void Clear(int flags, uint32_t color, float zValue, uint32_t stencil);

    static LRESULT CALLBACK gfxWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

    declstatic(float, m_fWidth);
    declstatic(float, m_fHeight);
    declstatic(int, m_iWidth);
    declstatic(int, m_iHeight);
    declstatic(int, m_ZDepth);
    declstatic(int, m_ColorDepth);
    declstatic(int, m_X);
    declstatic(int, m_Y);

    // 0x1 | Closing
    // 0x2 | Focused
    declstatic(uint32_t, m_EvtFlags);
};

bool gfxAutoDetect(bool* success);

void ProgressCB(const char *unused, signed int progress);

void gfxDebugf(bool enabled, const char* format, ...);

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

declvar(int, gfxMinScreenWidth);
declvar(int, gfxMinScreenHeight);
declvar(int, gfxMaxScreenWidth);
declvar(int, gfxMaxScreenHeight);
declvar(int, gfxTexReduceSize);

declvar(void(*)(void), gfxLostCallback);

declvar(float, ioMouse__InvWidth);
declvar(float, ioMouse__InvHeight);

declvar(bool, gfxDebug);

declvar(gfxBitmap*, LoadingScreenBitmap);
declvar(void(*)(void), gfxRestoreCallback);