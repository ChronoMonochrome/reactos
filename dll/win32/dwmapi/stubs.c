/*
 * PROJECT:     ReactOS DWM Compatibility Layer
 * LICENSE:     GPL-2.0-or-later (https://spdx.org/licenses/GPL-2.0-or-later)
 * PURPOSE:     Stub file for dwmapi
 * COPYRIGHT:   Copyright 2022 Justin Miller <justinmiller100@gmail.com>
 */

#include "dwmapi_private.h"
//#define NDEBUG
#include <debug.h>

/**********************************************************************
 *           DwmExtendFrameIntoClientArea    (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmExtendFrameIntoClientArea(HWND hwnd,
                             _In_ const MARGINS* margins)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p, %p) stub\n", hwnd, margins);

    return STATUS_SUCCESS;
}

/**********************************************************************
 *           DwmGetColorizationColor      (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmGetColorizationColor(DWORD *colorization, BOOL *opaque_blend)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p, %p) stub\n", colorization, opaque_blend);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmFlush              (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmFlush(void)
{
    UNIMPLEMENTED;
    static BOOL once;

    if (!once++) DPRINT("called, Parameters:() stub\n");

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmInvalidateIconicBitmaps      (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmInvalidateIconicBitmaps(HWND hwnd)
{
    UNIMPLEMENTED;
    static BOOL once;

    if (!once++) DPRINT("called, Parameters:(%p) stub\n", hwnd);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmSetWindowAttribute         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmSetWindowAttribute(HWND hwnd, DWORD attributenum, LPCVOID attribute, DWORD size)
{
    UNIMPLEMENTED;
    static BOOL once;

    if (!once++) DPRINT("called, Parameters:(%p, %lx, %p, %lx) stub\n", hwnd, attributenum, attribute, size);

    return STATUS_SUCCESS;
}

/**********************************************************************
 *           DwmGetGraphicsStreamClient         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmGetGraphicsStreamClient(UINT uIndex, UUID *pClientUuid)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%d, %p) stub\n", uIndex, pClientUuid);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmGetTransportAttributes         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmGetTransportAttributes(BOOL *pfIsRemoting, BOOL *pfIsConnected, DWORD *pDwGeneration)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p, %p, %p) stub\n", pfIsRemoting, pfIsConnected, pDwGeneration);

    return DWM_E_COMPOSITIONDISABLED;
}

/**********************************************************************
 *           DwmUnregisterThumbnail         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmUnregisterThumbnail(HTHUMBNAIL thumbnail)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p) stub\n", thumbnail);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmEnableMMCSS         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmEnableMMCSS(BOOL enableMMCSS)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%d) stub\n", enableMMCSS);

    return STATUS_SUCCESS;
}

/**********************************************************************
 *           DwmGetGraphicsStreamTransformHint         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmGetGraphicsStreamTransformHint(UINT uIndex, MilMatrix3x2D *pTransform)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%d, %p) stub\n", uIndex, pTransform);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmEnableBlurBehindWindow         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmEnableBlurBehindWindow(HWND hWnd, const DWM_BLURBEHIND *pBlurBuf)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:%p %p\n", hWnd, pBlurBuf);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmDefWindowProc         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
BOOL
WINAPI
DwmDefWindowProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam, LRESULT *plResult)
{
    UNIMPLEMENTED;
    static int i;

    if (!i++) DPRINT("called, Parameters:stub\n");

    return FALSE;
}

/**********************************************************************
 *           DwmGetWindowAttribute         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmGetWindowAttribute(HWND hwnd, DWORD attribute, PVOID pv_attribute, DWORD size)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p %ld %p %ld) stub\n", hwnd, attribute, pv_attribute, size);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmRegisterThumbnail         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmRegisterThumbnail(HWND dest, HWND src, PHTHUMBNAIL thumbnail_id)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p %p %p) stub\n", dest, src, thumbnail_id);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmGetCompositionTimingInfo         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmGetCompositionTimingInfo(HWND hwnd, DWM_TIMING_INFO *info)
{
    UNIMPLEMENTED;
    static int i;

    if(!i++) DPRINT("called, Parameters:(%p %p)\n", hwnd, info);

    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmAttachMilContent         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmAttachMilContent(HWND hwnd)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p) stub\n", hwnd);
    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmDetachMilContent         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmDetachMilContent(HWND hwnd)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p) stub\n", hwnd);
    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmUpdateThumbnailProperties         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmUpdateThumbnailProperties(HTHUMBNAIL thumbnail, const DWM_THUMBNAIL_PROPERTIES *props)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p, %p) stub\n", thumbnail, props);
    return E_NOTIMPL;
}

/**********************************************************************
 *           DwmSetPresentParameters         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmSetPresentParameters(HWND hwnd, DWM_PRESENT_PARAMETERS *params)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p %p) stub\n", hwnd, params);
    return STATUS_SUCCESS;
};

/**********************************************************************
 *           DwmSetIconicLivePreviewBitmap         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmSetIconicLivePreviewBitmap(HWND hwnd, HBITMAP hbmp, POINT *pos, DWORD flags)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p %p %p %lx) stub\n", hwnd, hbmp, pos, flags);
    return STATUS_SUCCESS;
};

/**********************************************************************
 *           DwmSetIconicThumbnail         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmSetIconicThumbnail(HWND hwnd, HBITMAP hbmp, DWORD flags)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p %p %lx) stub\n", hwnd, hbmp, flags);
    return STATUS_SUCCESS;
};

/**********************************************************************
 *           DwmpGetColorizationParameters         (DWMAPI.@)
 *           TODO: UNIMPLEMENTED
 *           Description:
 *           Parameters:
 *           Other notes:
 */
HRESULT
WINAPI
DwmpGetColorizationParameters(void *params)
{
    UNIMPLEMENTED;
    DPRINT("called, Parameters:(%p) stub\n", params);
    return E_NOTIMPL;
}
