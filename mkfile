</$objtype/mkfile
LIB=/$objtype/lib/ape/libwtf.a

OFILES=\
	fwide.$O\
	mbrlen.$O\
	mbrtowc.$O\
	mbsinit.$O\
	mbsrtowcs.$O\
	wcrtomb.$O\
	wcsrtombs.$O\
	wcswidth.$O\
	wctrans.$O\
	wctype.$O\
	wcwidth.$O


HFILES=\
	/sys/include/ape/wchar.h\
	/sys/include/ape/wctype.h

UPDATE=\
	mkfile\
	$HFILES\
	${OFILES:%.$O=%.c}\
	${LIB:/$objtype/%=/386/%}\

</sys/src/cmd/mksyslib

CC=pcc
LD=pcc
CFLAGS= -c -I. -I.. -D_POSIX_SOURCE -D_BSD_EXTENSION -D_C99_SNPRINTF_EXTENSION \
-DHAVE_VSNPRINTF 

%.$O: lib/%.c
	$CC $CFLAGS lib/$stem.c


install:V:
	cp libwtf.a /$objtype/lib/ape/libwtf.a
	cp wchar.h /sys/include/ape/wchar.h
	cp wctype.h /sys/include/ape/wctype.h

clean:V:
	rm -f *.[$OS]

nuke:V:
	mk clean
	rm -f $LIB
	rm -f $HFILES

