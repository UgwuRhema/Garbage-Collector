#include <stdio.h>
#include <stdlib.h>
#include "gc.h"

int
main(int argc, char *argv[])
{
	printf("Garbage Collector\n");	
	/*let's try it
	 * when we compile and check with valgrind
	 * there should be no memory leaks*/
	int *p = (int *)malloc(sizeof(int));
	*p = 67;
	int GC_ATTR **ptr = &p;
	printf("Value of p: %d\n", **ptr);
	/*no free*/
	return 0;
}
