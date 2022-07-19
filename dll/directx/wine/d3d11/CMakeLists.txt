
add_definitions(-D__WINESRC__)
include_directories(${REACTOS_SOURCE_DIR}/sdk/include/reactos/wine)
spec2def(d3d11.dll d3d11.spec ADD_IMPORTLIB)

list(APPEND SOURCE
    d3d11.c
    )

list(APPEND PCH_SKIP_SOURCE
    stubs.c)

add_library(d3d11 MODULE
    ${SOURCE}
    ${PCH_SKIP_SOURCE}
    d3d11.rc
    ${CMAKE_CURRENT_BINARY_DIR}/d3d11.def)

set_module_type(d3d11 win32dll)
target_link_libraries(d3d11 uuid wine mediaobj_guid)
add_importlibs(d3d11 user32 advapi32 ole32 msvcrt kernel32 ntdll)
add_pch(d3d11 precomp.h "${PCH_SKIP_SOURCE}")
add_cd_file(TARGET d3d11 DESTINATION reactos/system32 FOR all)
