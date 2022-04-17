/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS System Libraries
 * PURPOSE:         ReactOS Desktop Window Manager API header
 * COPYRIGHT:       Copyright 2021 Justin Miller (justinmiller100@gmail.com)
 */

#ifndef __DWMAPI_H
#define __DWMAPI_H

/* INCLUDES ******************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* PSDK/NDK Headers */
#define WIN32_NO_STATUS
#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>
#include <winnls.h>
#include <winreg.h>
#include <winnls32.h>
#include <winver.h>

#include <imm.h>
#include <ddk/immdev.h>

#define NTOS_MODE_USER
#include <ndk/umtypes.h>
#include <ndk/pstypes.h>
#include <ndk/rtlfuncs.h>

/* Public Win32K Headers */
#include <ntuser.h>

#include <dwmapi.h>

typedef struct _DWM_PRESENT_PARAMETERS
{
    UINT32          cbSize;
    BOOL            fQueue;
    DWM_FRAME_COUNT cRefreshStart;
    UINT            cBuffer;
    BOOL            fUseSourceRate;
    UNSIGNED_RATIO  rateSource;
    UINT            cRefreshesPerFrame;
    DWM_SOURCE_FRAME_SAMPLING  eSampling;
} DWM_PRESENT_PARAMETERS;

#endif /* __DWMAPI_H */
