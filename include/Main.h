#pragma once

static_var(0x5E0CF9, bool, ZoneStartup);

static_var(0x5C28D4, char*, APPTITLE);
static_var(0x5C28D8, char*, DEFAULT_CITY);
static_var(0x5C28DC, char*, VERSION_STRING);

int CALLBACK MidtownMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine,
    int       nCmdShow
);