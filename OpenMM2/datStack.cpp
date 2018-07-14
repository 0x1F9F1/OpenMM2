#include "stdafx.h"
#include "datStack.h"

int datStack::ExceptionFilter(_EXCEPTION_POINTERS* exception)
{
    CONTEXT* context = exception->ContextRecord;

    char stackTrace[256];
    datStack::LookupAddress(stackTrace, context->Eip);

    Displayf(
        "EAX=%08x EBX=%08x ECX=%08x EDX=%08x\n"
        "ESI=%08x EDI=%08x EBP=%08x ESP=%08x",
        context->Eax,
        context->Ebx,
        context->Ecx,
        context->Edx,
        context->Esi,
        context->Edi,
        context->Ebp,
        context->Esp);

    Displayf("Exception %x at EIP=%s", exception->ExceptionRecord->ExceptionCode, stackTrace);

    datStack::DoTraceback(16, (int *)context->Ebp, 0, "\n");

    return EXCEPTION_EXECUTE_HANDLER;
}

void datStack::LookupAddress(char* buffer, int address)
{
    // TODO: Handle PDB symbols

    return stub<cdecl_t<void, char*, int>>(0x4C7470, buffer, address);
}

void datStack::DoTraceback(int maxDepth, int * ebp, FILE * fileOut, char const * seperator)
{
    (void)seperator;

    char buffer[128];

    while (maxDepth--)
    {
        __try
        {
            int returnAddress = ebp[1];

            ebp = (int *)*ebp;

            if (returnAddress < 0)
            {
                break;
            }

            datStack::LookupAddress(buffer, returnAddress);

            if (fileOut)
            {
                fprintf(fileOut, "%s,", buffer);
            }
            else
            {
                Displayf("%s", buffer);
            }
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            break;
        }
    }
}
