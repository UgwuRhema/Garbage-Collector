#include "gc.h"

void
cln_free(void *ptr)
{
	void **pp = ptr;
	if (pp && *pp)
	{
		free(*pp);
		*pp = NULL;/*good practice*/
	}
	return;
}

struct arena_t *
arena_init(size_t capacity)
{
	struct arena_t *na = (struct arena_t *)malloc(sizeof(struct arena_t));
	na->buffer = (uint8_t *)malloc(sizeof(uint8_t));
	return na;
}
