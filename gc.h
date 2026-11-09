#ifndef GC_H
#define GC_H

#include <stdlib.h>
#define GC_ATTR __attribute__((cleanup(cln_free)))

extern void cln_free(void *);

#endif
