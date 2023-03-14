#define WIN32_NO_STATUS
#define _INC_WINDOWS
#define COM_NO_WINDOWS_H
#include <windef.h>

#define NDEBUG
#include <reactos/debug.h>

#if defined(__GNUC__) || defined(__clang__)
__stdcall
#endif
HRESULT
#if !defined(__GNUC__) && !defined(__clang__)
__stdcall
#endif
 DXVA2CreateDirect3DDeviceManager9(
  UINT                    *pResetToken,
  PVOID **ppDeviceManager
)
{
    UNIMPLEMENTED;
    return 0;
}

#if defined(__GNUC__) || defined(__clang__)
__stdcall
#endif
HRESULT
#if !defined(__GNUC__) && !defined(__clang__)
__stdcall
#endif
 DXVA2CreateVideoService(
  ULONG_PTR *pDD,
  REFIID           riid,
  void             **ppService
)
{
  return 0;
}
