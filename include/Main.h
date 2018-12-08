#pragma once

declvar(bool, ZoneStartup);

declvar(char*, APPTITLE);
declvar(char*, DEFAULT_CITY);
declvar(char*, VERSION_STRING);

int CALLBACK MidtownMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine,
    int       nCmdShow
);