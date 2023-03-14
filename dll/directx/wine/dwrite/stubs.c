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
DWriteCreateFactory(
  int factoryType,
  REFIID              iid,
  PVOID          **factory
)
{
    UNIMPLEMENTED;
    return 0xC0000001L;
}
