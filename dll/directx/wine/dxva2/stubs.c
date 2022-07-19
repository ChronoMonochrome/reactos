#define WIN32_NO_STATUS
#define _INC_WINDOWS
#define COM_NO_WINDOWS_H
#include <precomp.h>

#define NDEBUG
#include <reactos/debug.h>


HRESULT DXVA2CreateDirect3DDeviceManager9(
  UINT                    *pResetToken,
  PVOID **ppDeviceManager
)
{
    UNIMPLEMENTED;
    return 0xC0000001L;
}
