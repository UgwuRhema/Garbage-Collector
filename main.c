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
	int *p GC_ATTR = (int *)malloc(sizeof(int));
	*p = 67;
	printf("Value of p: %d\n", *p);
	/*no free*/
	return 0;
}
