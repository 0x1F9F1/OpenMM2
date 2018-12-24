#include "stdafx.h"
#include "lvlProgress.h"

static_var(0x631654, void(*)(const char *, int), progressCB);

void lvlProgress::SetCallback(void(*callback)(char const *, int))
{
    progressCB = callback;
}
