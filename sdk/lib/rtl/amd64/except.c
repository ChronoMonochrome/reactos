/*
 * PROJECT:     ReactOS Run-Time Library
 * LICENSE:     GPL-2.0-or-later (https://spdx.org/licenses/GPL-2.0-or-later)
 * PURPOSE:     User-mode exception support for AMD64
 * COPYRIGHT:   Copyright 2018-2021 Timo Kreuzer <timo.kreuzer@reactos.org>
 */

/* INCLUDES *****************************************************************/

#include <rtl.h>
#define NDEBUG
#include <debug.h>

/* PUBLIC FUNCTIONS **********************************************************/

VOID
NTAPI
RtlRaiseException(IN PEXCEPTION_RECORD ExceptionRecord)
{
    CONTEXT Context;
    NTSTATUS Status = STATUS_INVALID_DISPOSITION;
    ULONG64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
    PVOID HandlerData;
    ULONG64 EstablisherFrame;

    /* Capture the context */
    RtlCaptureContext(&Context);

    /* Get the function entry for this function */
    FunctionEntry = RtlLookupFunctionEntry(Context.Rip,
                                           &ImageBase,
                                           NULL);

    /* Check if we found it */
    if (FunctionEntry)
    {
        /* Unwind to the caller of this function */
        RtlVirtualUnwind(UNW_FLAG_NHANDLER,
                         ImageBase,
                         Context.Rip,
                         FunctionEntry,
                         &Context,
                         &HandlerData,
                         &EstablisherFrame,
                         NULL);

        /* Save the exception address */
        ExceptionRecord->ExceptionAddress = (PVOID)Context.Rip;

        /* Write the context flag */
        Context.ContextFlags = CONTEXT_FULL;

        /* Check if user mode debugger is active */
        if (RtlpCheckForActiveDebugger())
        {
            /* Raise an exception immediately */
            Status = ZwRaiseException(ExceptionRecord, &Context, TRUE);
        }
        else
        {
            /* Dispatch the exception and check if we should continue */
            if (!RtlDispatchException(ExceptionRecord, &Context))
            {
                /* Raise the exception */
                Status = ZwRaiseException(ExceptionRecord, &Context, FALSE);
            }
            else
            {
                /* Continue, go back to previous context */
                Status = ZwContinue(&Context, FALSE);
            }
        }
    }

    /* If we returned, raise a status */
    RtlRaiseStatus(Status);
}

/*
* @unimplemented
*/
PVOID
NTAPI
RtlpGetExceptionAddress(VOID)
{
    UNIMPLEMENTED;
    return NULL;
}

/*
 * @unimplemented
 */
BOOLEAN
NTAPI
RtlDispatchException(IN PEXCEPTION_RECORD ExceptionRecord,
                     IN PCONTEXT Context)
{
    __debugbreak();
    UNIMPLEMENTED;
    return FALSE;
}