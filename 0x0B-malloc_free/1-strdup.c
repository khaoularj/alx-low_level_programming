#include "main.h"
#include <stdlib.h>
/**
 * _strdup * the function that returns a pointer to a newly
 * allocated space in memory the memory contains a copy of
 * the string given as a parameter
 * @str: the string
 * Return: NULL if the string is NULL or if the memory is insufficient
 * and on success returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	int size = 0;
	int x = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	p = malloc(sizeof(char) * (size + 1));
	if (p == 0)
		return (NULL);

	for (x = 0; size > x; x++)
		p[x] = str[x];
	return (p);
}


