#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return:pointer who points to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc(sizeof(char) * (x + y + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];
	for (y = 0; s2[y] != '\0'; x++, y++)
		p[x] = s2[y];
	p[x + y] = '\0';
	return (p);
}


