
add_definitions(-D__WINESRC__)
include_directories(${REACTOS_SOURCE_DIR}/sdk/include/reactos/wine)
spec2def(dwrite.dll dwrite.spec ADD_IMPORTLIB)

list(APPEND SOURCE
    dwrite.c
    )

list(APPEND PCH_SKIP_SOURCE
    stubs.c)

add_library(dwrite MODULE
    ${SOURCE}
    ${PCH_SKIP_SOURCE}
    dwrite.rc
    ${CMAKE_CURRENT_BINARY_DIR}/dwrite.def)

set_module_type(dwrite win32dll)
target_link_libraries(dwrite uuid wine mediaobj_guid)
add_importlibs(dwrite user32 advapi32 ole32 msvcrt kernel32 ntdll)
add_pch(dwrite precomp.h "${PCH_SKIP_SOURCE}")
add_cd_file(TARGET dwrite DESTINATION reactos/system32 FOR all)
