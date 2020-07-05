/* info about wctype.h:
 * https://pubs.opengroup.org/onlinepubs/009695399/basedefs/wctype.h.html
 */

#include <wchar.h> /* provides wint_t wctype_t */
#include <ctype.h>

typedef const short* const* wctrans_t;


/* missing unctions from standard APE libraries. Redefined or remapped to APE library functions */
/* moved the isw* to wchar.h since some programs expect them there */


/* missing functions from standard APE libraries that need libwtf.a */


wctrans_t wctrans(const char*);
wctype_t wctype(const char*);

