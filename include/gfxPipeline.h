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

    static void Manage();

    static LRESULT CALLBACK gfxWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

    decl_static(float, m_fWidth);
    decl_static(float, m_fHeight);
    decl_static(int, m_iWidth);
    decl_static(int, m_iHeight);
    decl_static(int, m_ZDepth);
    decl_static(int, m_ColorDepth);
    decl_static(int, m_X);
    decl_static(int, m_Y);

    // 0x1 | Closing
    // 0x2 | Focused
    decl_static(uint32_t, m_EvtFlags);
};

bool gfxAutoDetect(bool* success);

void ProgressCB(const char *message, signed int progress);

void gfxDebugf(bool enabled, const char* format, ...);

static_var(0x682FA0, HWND, hwndParent);
static_var(0x6830B8, HWND, hwndMain);
static_var(0x68311C, LPCSTR, lpWindowTitle);
static_var(0x6830F0, ATOM, ATOM_Class);
static_var(0x683108, LPCSTR, IconID);
static_var(0x5CA3EC, bool, pageFlip);
static_var(0x5CA3ED, bool, hasBorder);
static_var(0x5CA3EE, bool, useMultiTexture);
static_var(0x5CA664, bool, enableHWTnL);
static_var(0x68451D, bool, novblank);
static_var(0x6830D0, bool, inWindow);
static_var(0x6830D1, bool, isMaximized);
static_var(0x6830D2, bool, tripleBuffer);
static_var(0x6830D3, bool, useReference);
static_var(0x6830D4, bool, useSoftware);
static_var(0x6830D5, bool, useAgeSoftware);
static_var(0x6830D6, bool, useBlade);
static_var(0x6830D7, bool, useSysMem);
static_var(0x6830D8, int, useInterface);

static_var(0x6844B0, int, gfxMinScreenWidth);
static_var(0x6844CC, int, gfxMinScreenHeight);
static_var(0x6844FC, int, gfxMaxScreenWidth);
static_var(0x6844D8, int, gfxMaxScreenHeight);
static_var(0x6857D0, int, gfxTexReduceSize);

static_var(0x684500, bool, sm_UseInternal);

static_var(0x6830E8, void(*)(void), gfxLostCallback);

static_var(0x6A38EC, float, ioMouse__InvWidth);
static_var(0x6A38D4, float, ioMouse__InvHeight);

static_var(0x683104, bool, gfxDebug);

static_var(0x5E0CCC, gfxBitmap*, LoadingScreenBitmap);
static_var(0x6844B8, void(*)(void), gfxRestoreCallback);