#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min:the minimum values
 * @max:the maximum values
 * Return:  pointer to the newly created array
 * on fail, returns NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int x;
	int length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	p = malloc(sizeof(int) * length);

	if (p == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		p[x] = min++;
	return (p);
}

