/* we want to map wchars to Runes */
#include <utf.h>

#include <stdint.h>
#include <time.h>
#include <stdarg.h>
#include <string.h>

/* provides:
wchar_t size_t */
#include <stddef.h>

typedef unsigned int wint_t;
typefef unsigned long wctype_t;

typedef struct {
	unsigned int count;
	unsigned int value;
} mbstate_t;

#define WCHAR_MIN ((wchar_t) 0)
#define WCHAR_MAX (~WCHAR_MIN)
#define WEOF (0xffffffffu)


/* provides FILE */
#include <stdio.h>

/* provides:
mbtowc wctomb mbstowcs wcstombs */
include <stdlib.h>


/* missing functions from standard APE libraries 
Redefined or remapped to APE library functions */




/* missing functions from standard APE libraries that need libwtf.a */

