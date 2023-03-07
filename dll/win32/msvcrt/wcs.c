/* taken from wine wcs.c & file.c */

#include <windef.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <tchar.h>
#include <internal/safecrt.h>

#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(msvcrt);

#define _MSVCR_VER 140

#if _MSVCR_VER >= 140

/*********************************************************************
 *              __stdio_common_vfprintf (UCRTBASE.@)
 */
int CDECL __stdio_common_vfprintf(unsigned __int64 options, FILE *file, const char *format,
                                        _locale_t locale, va_list valist)
{
    FIXME("options %#I64x not handled\n", options);

    return vfprintf(file, format, valist);
}

/*********************************************************************
 *              __stdio_common_vfprintf_p (UCRTBASE.@)
 */
int CDECL __stdio_common_vfprintf_p(unsigned __int64 options, FILE *file, const char *format,
                                          _locale_t locale, va_list valist)
{
    FIXME("options %#I64x not handled\n", options);

	return vfprintf(file, format, valist);
}


/*********************************************************************
 *              __stdio_common_vfprintf_s (UCRTBASE.@)
 */
int CDECL __stdio_common_vfprintf_s(unsigned __int64 options, FILE *file, const char *format,
                                          _locale_t locale, va_list valist)
{
    FIXME("options %#I64x not handled\n", options);

	return vfprintf(file, format, valist);
}

/*********************************************************************
 *              __stdio_common_vfwprintf (UCRTBASE.@)
 */
int CDECL __stdio_common_vfwprintf(unsigned __int64 options, FILE *file, const wchar_t *format,
                                         _locale_t locale, va_list valist)
{
    FIXME("options %#I64x not handled\n", options);

	return vfwprintf(file, format, valist);
}

/*********************************************************************
 *              __stdio_common_vfwprintf_p (UCRTBASE.@)
 */
int CDECL __stdio_common_vfwprintf_p(unsigned __int64 options, FILE *file, const wchar_t *format,
                                           _locale_t locale, va_list valist)
{
    FIXME("options %#I64x not handled\n", options);
	
	return vfwprintf(file, format, valist);
}

/*********************************************************************
 *              __stdio_common_vfwprintf_s (UCRTBASE.@)
 */
int CDECL __stdio_common_vfwprintf_s(unsigned __int64 options, FILE *file, const wchar_t *format,
                                           _locale_t locale, va_list valist)
{
    FIXME("options %#I64x not handled\n", options);

	return vfwprintf(file, format, valist);
}

#endif /* _MSVCR_VER >= 140 */


#if _MSVCR_VER>=140

/*********************************************************************
 *              __stdio_common_vsnprintf_s (UCRTBASE.@)
 */
int CDECL __stdio_common_vsnprintf_s( unsigned __int64 options,
        char *str, size_t sizeOfBuffer, size_t count,
        const char *format, _locale_t locale, va_list valist )
{
    FIXME("options %#I64x not handled\n", options);

	return vsnprintf(str, count, format, valist);
}

/*********************************************************************
 *              __stdio_common_vsnwprintf_s (UCRTBASE.@)
 */
int CDECL __stdio_common_vsnwprintf_s( unsigned __int64 options,
        wchar_t *str, size_t sizeOfBuffer, size_t count,
        const wchar_t *format, _locale_t locale, va_list valist )
{
    FIXME("options %#I64x not handled\n", options);
	
	return vsnwprintf(str, count, format, valist);
}

/*********************************************************************
 *              __stdio_common_vswprintf_s (UCRTBASE.@)
 */
int CDECL __stdio_common_vswprintf_s( unsigned __int64 options,
        wchar_t *str, size_t count, const wchar_t *format,
        _locale_t locale, va_list valist )
{
    FIXME("options %#I64x not handled\n", options);
	
	return vswprintf(str, format, valist);
}

/*********************************************************************
 *              __stdio_common_vsprintf_s (UCRTBASE.@)
 */
int CDECL __stdio_common_vsprintf_s( unsigned __int64 options,
        char *str, size_t count, const char *format,
        _locale_t locale, va_list valist )
{
    FIXME("options %#I64x not handled\n", options);
	
	return vsprintf(str, format, valist);
}

int CDECL __stdio_common_vsprintf( unsigned __int64 options, char *str, size_t len, const char *format,
                                   _locale_t locale, va_list valist )
{
	FIXME("options %#I64x not handled\n", options);
	
	return vsprintf(str, format, valist);
}

/*********************************************************************
 *              __stdio_common_vswprintf (UCRTBASE.@)
 */
int CDECL __stdio_common_vswprintf( unsigned __int64 options,
        wchar_t *str, size_t len, const wchar_t *format,
        _locale_t locale, va_list valist )
{
    FIXME("options %#I64x not handled\n", options);
	
	return vswprintf(str, format, valist);
}

#endif /* _MSVCR_VER>=140 */
