#pragma once

declvar(int, gameState);
declvar(int, gameEnding);

declvar(bool, ZoneStartup);

declvar(char*, APPTITLE);
declvar(char*, DEFAULT_CITY);
declvar(char*, VERSION_STRING);

int CALLBACK WinMain(
    _In_ HINSTANCE hInstance,
    _In_ HINSTANCE hPrevInstance,
    _In_ LPSTR     lpCmdLine,
    _In_ int       nCmdShow
);