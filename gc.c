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
