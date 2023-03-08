

add_definitions(
    -D__WINESRC__)

include_directories(${REACTOS_SOURCE_DIR}/sdk/include/reactos/wine)
include_directories(${REACTOS_SOURCE_DIR}/sdk/include/psdk)

spec2def(dxgi.dll dxgi.spec ADD_IMPORTLIB)

add_library(dxgi MODULE
    version.rc
    stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/dxgi_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/dxgi.def)

set_module_type(dxgi win32dll)
add_importlibs(dxgi msvcrt kernel32)
add_cd_file(TARGET dxgi DESTINATION reactos/system32 FOR all)
