#include <precomp.h>
#include <errno.h>
#include <internal/wine/msvcrt.h>

/*********************************************************************
 *              _errno (MSVCRT.@)
 */
int CDECL RoGetActivationFactory(
  void * activatableClassId,
  int  iid,
  void **factory
)
{
    UNIMPLEMENTED;
    return 0;
}
