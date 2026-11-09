#include "gc.h"

void
cln_free(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;/*good practice*/
	}
	return;
}
