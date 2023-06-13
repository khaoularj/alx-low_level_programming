#include "main.h"
#include <stdlib.h>
/**
 * create_array - the function that creates an array of chars
 * @size : the size of the array
 * @c : the char
 * Return:pointer to the array, if size is 0 return NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;

	char *p = (char *) malloc(size * sizeof(char));

	if (size == 0 || p == 0)
		return (NULL);
	for (x = 0; size > x; x++)
		p[x] = c;
	return (p);
}

