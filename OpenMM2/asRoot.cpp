#include "stdafx.h"
#include "asRoot.h"
#include "asLinearCS.h"

defnvar(0x661738, ROOT);

void EnableNanSignal(bool enabled)
{
    return stub<cdecl_t<void, bool>>(0x4C51F0, enabled);
}

asRoot::asRoot()
{
    Matrix.Identity();

    asLinearCS::CurrentMatrix = &Matrix;

    Reset();

    EnableNan = false;
    byte49 = false;
}

void asRoot::Init(bool nanSignal)
{
    Reset();

    EnableNan = nanSignal;

    EnableNanSignal(nanSignal);
}

void asRoot::Update(void)
{
    if (EnableNan)
    {
        EnableNanSignal(1);
    }

    asLinearCS::CurrentMatrix = &Matrix;

    asNode::Update();

    if (byte49)
    {
        byte49 = 0;
        Paused = 1;
    }
}

void asRoot::Reset(void)
{
    Paused = 0;
    byte49 = 0;
}

char* asRoot::GetClassName(void)
{
    return "asRoot";
}
