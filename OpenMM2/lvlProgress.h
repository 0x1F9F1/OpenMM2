#pragma once

class lvlProgress
{
public:
    static void SetCallback(void(*callback)(char const *, int));
};
