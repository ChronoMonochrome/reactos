
include_directories(${REACTOS_SOURCE_DIR}/sdk/lib/crt/include)
spec2def(msvcr70.dll msvcr70.spec)

add_definitions(
    -DUSE_MSVCRT_PREFIX
    -D_MSVCRT_
    -D_MSVCRT_LIB_
    -D_MT
    -D_CTYPE_DISABLE_MACROS
    -D_NO_INLINING
    -DCRTDLL
    -D__MINGW_IMPORT="")

list(APPEND SOURCE
    msvcr70.c
    ${CMAKE_CURRENT_BINARY_DIR}/msvcr70_stubs.c
    ${CMAKE_CURRENT_BINARY_DIR}/msvcr70.def)

add_library(msvcr70 MODULE ${SOURCE})
set_module_type(msvcr70 win32dll ENTRYPOINT DllMain 12)
add_dependencies(msvcr70 psdk)
target_link_libraries(msvcr70 crt wine ${PSEH_LIB})

if(MSVC)
    # export of deleting destructor "name"
    target_link_options(msvcr70 PRIVATE /ignore:4102)
endif()

add_importlibs(msvcr70 kernel32 ntdll)
add_cd_file(TARGET msvcr70 DESTINATION reactos/system32 FOR all)
