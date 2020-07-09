/* info about whcar.h:
 * https://pubs.opengroup.org/onlinepubs/009695399/basedefs/wchar.h.html
 wide UTF --> WTF */

#pragma lib "/$M/lib/ape/libwtf.a"

/* we want to map wchars to Runes and rune functions if possible */
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

/* 
 * #############################################
 *              typedefs 
 * #############################################
 */

#define wint_t Rune
typefef unsigned long wctype_t;

typedef struct {
	unsigned int count;
	unsigned int value;
} mbstate_t;

#define WCHAR_MIN ((wchar_t) 0)
#define WCHAR_MAX Runemax
#define WEOF ((Rune) EOF)


/* ##############################################
 * Missing functions from standard APE libraries. 
 * Redefined or remapped to APE library functions 
 * ##############################################
 */

/* hack */
extern Rune btowc(int);
#define btowc(c) ((Rune) c)
extern int wctob(Rune);
#define wctob(c) ((int) c)

/* utf.h */

/* stdio.h */
extern Rune fgetwc(FILE *);
#define fgetwc(f) fgetc(f)
extern Rune fputwc(wchar_t, FILE *);
#define fputwc(c, f) fputc((int) c, f) 
extern wchar_t *fgetws(wchar_t *, int, FILE *);
#define fgetws(c, i, f) fgets((char *) c, i, f)
extern int fputws(const wchar_t *, FILE *);
#define fputws(c, f) fputs((const char *) c, f)
extern int fwscanf(FILE *, const wchar_t *, ...);
#define fwscanf(f, c, ...) fscanf(f, (const char *) c, ...)
extern int fwprintf(FILE *, const wchar_t *, ...);
#define fwprintf(f, c, ...) fprintf(f, (const char *) c, ...)
extern int fwscanf(FILE *, const wchar_t *, ...);
#define fwscanf(f, c, ...) fscanf(f, (const char *) c, ...)
extern Rune getwchar(void);
#define getwchar() getchar()
extern Rune getwc(FILE *);
#define getwc(f) getc(f)
extern Rune putwchar(Rune);
#define putwchar(c) putchar((int) c)
extern Rune putwc(Rune, FILE*);
#define putwc(r, f) putc((int) r, f)
extern int swprintf(wchar_t *, size_t, const wchar_t *, ...);
#define swprintf(c, st, cw, ...) sprintf((char *) c, (const char *) wc, ...)
extern int swscanf(const wchar_t *, const wchar_t *, ...);
#define swscanf(c1, c2, ...) sscanf((const char *) c1, (const char *) c2, ...)
extern Rune ungetwc(Rune, FILE *);
#define ungetwc(c, f) ungetc((int) c, f)
extern int vfwprintf(FILE *, const wchar_t *, va_list);
#define vfwprintf(f, c, a) vfprintf(f, (const char *) c, a)
extern int vfwscanf(FILE *, const wchar_t *, va_list);
#define vfwscanf(f, c, a) vfscanf(f, (const char *) c, a)
extern int vwprintf(const wchar_t *, va_list);
#define vwprintf(c, a) vprintf((const char *) c, a)
extern int vswprintf(wchar_t *, size_t, const wchar_t *, va_list);
#define vswprintf(c1, st, c2, a) vsprintf((char *) c1, (const char *) c2, a)
extern int wprintf(const wchar_t *, ...);
#define wprintf(c, ...) printf((const char *) c, ...)
extern int wscanf(const wchar_t *, ...);
#define wscanf(c, ...) scanf((const char *) c, ...)

/* stdlib.h */
extern long wcstol(const wchar_t *, wchar_t **, int);
#define wcstol(c1, c2, i) strtol((const char *) c1, (char **) c2, i)
extern long double wcstold(const wchar_t *, wchar_t **);
#define wcstold(c1, c2) strtod((const char *) c1, (char **) c2)
extern long long wcstoll(const wchar_t *, wchar_t **, int);
#define wcstoll(c1, c2, i) strtoll((const char *) c1, (char **) c2, i)
extern unsigned long wcstoul(const wchar_t *, wchar_t **, int);
#define wcstoul(c1, c2, i) strtoul((const char *) c1, (char **) c2, i)
extern unsigned long long wcstoull(const wchar_t *, wchar_t **, int);
#define wcstoull(c1, c2, i) strtoull((const char *) c1, (char **) c2, i)

/* string.h */
extern wchar_t wcscpy(whcar_t *, const whcar_t *);
#define wcscpy(dest,src) strcpy((char *) dest, (const char *) src)
extern wchar_t wcscat(wchar_t *. const wchar_t *);
#define wcscat(dest, src) strcat((char *) dest, (const char *) src)
extern size_t wcslen(const wchar_t *);
#define wcslen(s) strlen((const char *) s)
extern wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
#define wmemchr(c1, c2, st) memchr((const void*) c1, (int) c2, st)
extern int wmemcmp(const wchar_t *, const wchar_t *, size_t);
#define wmemcmp(c1, c2, st) memcmp((const void *) c1, (const void *) c2, st)
extern wchar_t *wmemcpy(wchar_t *, const wchar_t *, size_t);
#define wmemcpy(c1, c2, st) memcpy((void *) c1, (const void *) c2, st)
extern wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
#define wmemmove(c1, c2, st) memmove((void *) c1, (const void *) c2, st)
extern wchar_t *wmemset(wchar_t *, wchar_t, size_t);
#define wmemset(c1, c2, st) memset((void *) c1, (int) c2, st)

/* ##############################################
 * Missing functions from standard APE libraries. 
 * Functions that need libwtf.a 
 * ##############################################
 */

int vswscanf(const wchar_t *, const wchar_t *, va_list);
int vwscanf(const wchar_t *, va_list);

int wcwidth(wchar_t);
int wcswidth(const wchar_t *, size_t);

/*
 * stuff copied from opengroup, TODO
 * 
  
int           fwide(FILE *, int);

size_t        mbrlen(const char *restrict, size_t, mbstate_t *restrict);
size_t        mbrtowc(wchar_t *restrict, const char *restrict, size_t,
                  mbstate_t *restrict);
int           mbsinit(const mbstate_t *);
size_t        mbsrtowcs(wchar_t *restrict, const char **restrict, size_t,
                  mbstate_t *restrict);
   
size_t        wcrtomb(char *restrict, wchar_t, mbstate_t *restrict);
wchar_t      *wcscat(wchar_t *restrict, const wchar_t *restrict);
wchar_t      *wcschr(const wchar_t *, wchar_t);
int           wcscmp(const wchar_t *, const wchar_t *);
int           wcscoll(const wchar_t *, const wchar_t *);

size_t        wcscspn(const wchar_t *, const wchar_t *);
size_t        wcsftime(wchar_t *restrict, size_t,
                  const wchar_t *restrict, const struct tm *restrict);

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

[XSI][Option Start]
wchar_t      *wcswcs(const wchar_t *, const wchar_t *);

[Option End]
size_t        wcsxfrm(wchar_t *restrict, const wchar_t *restrict, size_t);

*/
