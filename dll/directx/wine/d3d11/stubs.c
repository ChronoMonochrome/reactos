#define WIN32_NO_STATUS
#define _INC_WINDOWS
#define COM_NO_WINDOWS_H
#include <precomp.h>

#define NDEBUG
#include <reactos/debug.h>

HRESULT D3D11CreateDevice(
   PVOID           *pAdapter,
   UINT32        DriverType,
   HMODULE                 Software,
   UINT                    Flags,
   UINT32 *pFeatureLevels,
   UINT                    FeatureLevels,
   UINT                    SDKVersion,
  PVOID    **ppDevice,
  PVOID    *pFeatureLevel,
  PVOID    **ppImmediateContext
)
{
  return (0xC0000001L);
}