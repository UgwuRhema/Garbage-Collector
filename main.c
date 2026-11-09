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
	int GC_ATTR *ptr = (int *)malloc(sizeof(int));
	*ptr = 67;
	/*no free*/
	return 0;
}
