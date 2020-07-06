/* info about whcar.h:
 * https://pubs.opengroup.org/onlinepubs/009695399/basedefs/wchar.h.html
 */

/* we want to map wchars to Runes if possible */
#include <utf.h>

/* Headers that need to be included according to the definition */
#include <ctype.h>
#include <stdarg.h>
#include <stddef.h> /* provides: wchar_t size_t */
#include <stdint.h>
#include <stdio.h>  /* provides FILE */
#include <stdlib.h> /* provides: mbtowc wctomb mbstowcs wcstombs */
#include <string.h>
#include <time.h>

/* typedefs */

typedef unsigned int wint_t;
typefef unsigned long wctype_t;

typedef struct {
	unsigned int count;
	unsigned int value;
} mbstate_t;

#define WCHAR_MIN ((wchar_t) 0)
#define WCHAR_MAX (~WCHAR_MIN)
#define WEOF (0xffffffffu)


/* missing functions from standard APE libraries 
Redefined or remapped to APE library functions */



/* missing functions from standard APE libraries that need libwtf.a */

/*
 * wint_t        btowc(int);
wint_t        fgetwc(FILE *);
wchar_t      *fgetws(wchar_t *restrict, int, FILE *restrict);
wint_t        fputwc(wchar_t, FILE *);
int           fputws(const wchar_t *restrict, FILE *restrict);
int           fwide(FILE *, int);
int           fwprintf(FILE *restrict, const wchar_t *restrict, ...);
int           fwscanf(FILE *restrict, const wchar_t *restrict, ...);
wint_t        getwc(FILE *);
wint_t        getwchar(void);

size_t        mbrlen(const char *restrict, size_t, mbstate_t *restrict);
size_t        mbrtowc(wchar_t *restrict, const char *restrict, size_t,
                  mbstate_t *restrict);
int           mbsinit(const mbstate_t *);
size_t        mbsrtowcs(wchar_t *restrict, const char **restrict, size_t,
                  mbstate_t *restrict);
wint_t        putwc(wchar_t, FILE *);
wint_t        putwchar(wchar_t);
int           swprintf(wchar_t *restrict, size_t,
                  const wchar_t *restrict, ...);
int           swscanf(const wchar_t *restrict,
                  const wchar_t *restrict, ...);

wint_t        ungetwc(wint_t, FILE *);
int           vfwprintf(FILE *restrict, const wchar_t *restrict, va_list);
int           vfwscanf(FILE *restrict, const wchar_t *restrict, va_list);
int           vwprintf(const wchar_t *restrict, va_list);
int           vswprintf(wchar_t *restrict, size_t,
                  const wchar_t *restrict, va_list);
int           vswscanf(const wchar_t *restrict, const wchar_t *restrict,
                  va_list);
int           vwscanf(const wchar_t *restrict, va_list);
size_t        wcrtomb(char *restrict, wchar_t, mbstate_t *restrict);
wchar_t      *wcscat(wchar_t *restrict, const wchar_t *restrict);
wchar_t      *wcschr(const wchar_t *, wchar_t);
int           wcscmp(const wchar_t *, const wchar_t *);
int           wcscoll(const wchar_t *, const wchar_t *);
wchar_t      *wcscpy(wchar_t *restrict, const wchar_t *restrict);
size_t        wcscspn(const wchar_t *, const wchar_t *);
size_t        wcsftime(wchar_t *restrict, size_t,
                  const wchar_t *restrict, const struct tm *restrict);
size_t        wcslen(const wchar_t *);
wchar_t      *wcsncat(wchar_t *restrict, const wchar_t *restrict, size_t);
int           wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t      *wcsncpy(wchar_t *restrict, const wchar_t *restrict, size_t);
wchar_t      *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t      *wcsrchr(const wchar_t *, wchar_t);
size_t        wcsrtombs(char *restrict, const wchar_t **restrict,
                  size_t, mbstate_t *restrict);
size_t        wcsspn(const wchar_t *, const wchar_t *);
wchar_t      *wcsstr(const wchar_t *restrict, const wchar_t *restrict);
double        wcstod(const wchar_t *restrict, wchar_t **restrict);
float         wcstof(const wchar_t *restrict, wchar_t **restrict);
wchar_t      *wcstok(wchar_t *restrict, const wchar_t *restrict,
                  wchar_t **restrict);
long          wcstol(const wchar_t *restrict, wchar_t **restrict, int);
long double   wcstold(const wchar_t *restrict, wchar_t **restrict);
long long     wcstoll(const wchar_t *restrict, wchar_t **restrict, int);
unsigned long wcstoul(const wchar_t *restrict, wchar_t **restrict, int);
unsigned long long
              wcstoull(const wchar_t *restrict, wchar_t **restrict, int);
[XSI][Option Start]
wchar_t      *wcswcs(const wchar_t *, const wchar_t *);
int           wcswidth(const wchar_t *, size_t);
[Option End]
size_t        wcsxfrm(wchar_t *restrict, const wchar_t *restrict, size_t);
int           wctob(wint_t);
[XSI][Option Start]
int           wcwidth(wchar_t);
[Option End]
wchar_t      *wmemchr(const wchar_t *, wchar_t, size_t);
int           wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t      *wmemcpy(wchar_t *restrict, const wchar_t *restrict, size_t);
wchar_t      *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t      *wmemset(wchar_t *, wchar_t, size_t);
int           wprintf(const wchar_t *restrict, ...);
int           wscanf(const wchar_t *restrict, ...);

*/
