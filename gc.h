#ifndef GC_H
#define GC_H

#include <stdlib.h>
#include <stdint.h>
#define GC_ATTR __attribute__((cleanup(cln_free)))

struct arena_t
{
	size_t capacity;
	size_t offset;
	uint8_t *buffer;
};

extern void cln_free(void *);
extern struct arena_t *arena_init(size_t);

#endif
