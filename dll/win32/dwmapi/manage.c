/*
 * PROJECT:     ReactOS DWM Compatibility Layer
 * LICENSE:     GPL-2.0-or-later (https://spdx.org/licenses/GPL-2.0-or-later)
 * PURPOSE:     Source file for composition management
 * COPYRIGHT:   Copyright 2022 Justin Miller <justinmiller100@gmail.com>
 */

#include "dwmapi_private.h"
//#define NDEBUG
#include <debug.h>

/**********************************************************************
 *           DwmIsCompositionEnabled         (DWMAPI.@)
 *           TODO: Let's see about dealing with graphics streams next.
 *           Description:
 *              DWM isn't always running, and apps shouldn't depend on it.
 *           Applications will call this to check to see if its enabled and then
 *           adjust code paths accordingly.
 *           Parameters:
 *              BOOL: A pointer to the check done in the function before the call.
 *           Other notes: N/A
 */
HRESULT
WINAPI
DwmIsCompositionEnabled(_Out_ BOOL *enabled)
{
    return E_FAIL;
}

/**********************************************************************
 *           DwmEnableComposition         (DWMAPI.102)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmEnableComposition(UINT uCompositionAction)
{
    //UNIMPLEMENTED;
    //DPRINT("called, Parameters:(%d) stub\n", uCompositionAction);

    return E_FAIL;
}
