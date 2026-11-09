#include "gc.h"

void
cln_free(void *ptr)
{
	if (!ptr) return;
	free(ptr);
	return;
}
