#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- the function that allocates memory using malloc
 * @b:number of bytes
 * Return:on success pointer to the allocated memory
 * on fail, process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
