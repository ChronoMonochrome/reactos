
remove_definitions(-D_WIN32_WINNT=0x502 -DWINVER=0x502)
add_definitions(-D_WIN32_WINNT=0x601 -DWINVER=0x601)

include_directories(${REACTOS_SOURCE_DIR}/win32ss/include)

add_definitions(-D_DWMAPI_)
spec2def(dwmapi.dll dwmapi.spec)

list(APPEND SOURCE
    DllMain.c
    stubs.c
    manage.c)

add_library(dwmapi MODULE
    ${SOURCE}
    dwmapi.rc
    ${CMAKE_CURRENT_BINARY_DIR}/dwmapi.def
	${CMAKE_CURRENT_BINARY_DIR}/dwmapi_stubs.c)

set_module_type(dwmapi win32dll ENTRYPOINT DllMain)
add_importlibs(dwmapi kernel32 ntdll msvcrt user32)
add_dependencies(dwmapi psdk)
add_cd_file(TARGET dwmapi DESTINATION reactos/system32 FOR all)