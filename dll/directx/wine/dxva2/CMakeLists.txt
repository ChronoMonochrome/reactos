
add_definitions(-D__WINESRC__)
include_directories(${REACTOS_SOURCE_DIR}/sdk/include/reactos/wine)
spec2def(dxva2.dll dxva2.spec ADD_IMPORTLIB)

list(APPEND SOURCE
    dxva2.c
    )

list(APPEND PCH_SKIP_SOURCE
    stubs.c)

add_library(dxva2 MODULE
    ${SOURCE}
    ${PCH_SKIP_SOURCE}
    dxva2.rc
    ${CMAKE_CURRENT_BINARY_DIR}/dxva2.def)

set_module_type(dxva2 win32dll)
target_link_libraries(dxva2 uuid wine mediaobj_guid)
add_importlibs(dxva2 user32 advapi32 ole32 msvcrt kernel32 ntdll)
add_pch(dxva2 precomp.h "${PCH_SKIP_SOURCE}")
add_cd_file(TARGET dxva2 DESTINATION reactos/system32 FOR all)
