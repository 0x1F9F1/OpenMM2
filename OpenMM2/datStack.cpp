#include "stdafx.h"
#include "datStack.h"

int datStack::ExceptionFilter(_EXCEPTION_POINTERS* exception)
{
    return stub<cdecl_t<int, _EXCEPTION_POINTERS*>>(0x4C7720, exception);
}
