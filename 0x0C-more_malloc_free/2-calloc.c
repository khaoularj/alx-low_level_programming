#include "main.h"
#include <stdlib.h>
/**
 * _calloc - the function that allocates memory for an array
 * @nmemb:number of elements in array
 * @size:the size
 * Return: on success,  pointer to the allocated memory
 * on fail, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int x;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	ptr = (char *)p;
	for (x = 0; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	return (p);
}
