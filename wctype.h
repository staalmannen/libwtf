/* provides wint_t wctype_t */
#include <wchar.h>
#include <ctype.h>

typedef const short* const* wctrans_t;


/* missing unctions from standard APE libraries. Redefined or remapped to APE library functions */

extern int iswalnum(wint_t);
extern int iswalpha(wint_t);
extern int iswblank(wint_t);
extern int iswcntrl(wint_t);
extern int iswdigit(wint_t);
extern int iswgraph(wint_t);
extern int iswlower(wint_t);
extern int iswprint(wint_t);
extern int iswpunct(wint_t);
extern int iswspace(wint_t);
extern int iswupper(wint_t);
extern int iswxdigit(wint_t);
extern int towlower(wint_t);
extern int towupper(wint_t);

#define iswalnum(c) isalnum((int) c)
#define iswalpha(c) isalpha((int) c)
#define iswblank(c) (_ctype[(unsigned char)(c)]&_ISblank)
#define iswcntrl(c) iscntrl((int) c)
#define iswdigit(c) isdigit((int) c)
#define iswgraph(c) isgraph((int) c)
#define iswlower(c) islower((int) c)
#define iswprint(c) isprint((int) c)
#define iswpunct(c) ispunct((int) c)
#define iswspace(c) isspace((int) c)
#define iswupper(c) isupper((int) c)
#define iswxdigit(c) isxdigit((int) c)
#define towlower(c) tolower((int) c)
#define towupper(c) toupper((int) c)



/* missing functions from standard APE libraries that need libwtf.a */


wctrans_t wctrans(const char*);
wctype_t wctype(const char*);

