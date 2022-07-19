#define WIN32_NO_STATUS
#define _INC_WINDOWS
#define COM_NO_WINDOWS_H
#include <precomp.h>

#define NDEBUG
#include <reactos/debug.h>


HRESULT DWriteCreateFactory(
  int factoryType,
  REFIID              iid,
  PVOID          **factory
)
{
    UNIMPLEMENTED;
    return 0xC0000001L;
}
