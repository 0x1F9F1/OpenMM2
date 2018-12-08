#include "stdafx.h"
#include "mmInput.h"

defnvar(0x6B1CF0, GameInputPtr);

mmInput::mmInput()
{
    stub<thiscall_t<void, mmInput>>(0x52A990, this);
}

mmInput::~mmInput()
{
    stub<thiscall_t<void, mmInput>>(0x52AB90, this);
}

int mmInput::AttachToPipe(void)
{
    return stub<thiscall_t<int, mmInput>>(0x52ACB0, this);
}

void mmInput::Init(int inputDevice)
{
    stub<thiscall_t<void, mmInput, int>>(0x52C380, this, inputDevice);
}

void mmInput::Update()
{
    stub<thiscall_t<void, mmInput>>(0x52C9B0, this);
}

void mmInput::Reset()
{
    stub<thiscall_t<void, mmInput>>(0x52B170, this);
}
