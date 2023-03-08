

add_definitions(
    -D__WINESRC__)

include_directories(${REACTOS_SOURCE_DIR}/sdk/include/reactos/wine)
include_directories(${REACTOS_SOURCE_DIR}/sdk/include/psdk)

spec2def(dxguid.dll dxguid.spec ADD_IMPORTLIB)

add_library(dxguid MODULE
    version.rc
    dxguid.c
    ${CMAKE_CURRENT_BINARY_DIR}/dxguid_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/dxguid.def)

set_module_type(dxguid win32dll)
add_importlibs(dxguid msvcrt kernel32)
add_cd_file(TARGET dxguid DESTINATION reactos/system32 FOR all)
