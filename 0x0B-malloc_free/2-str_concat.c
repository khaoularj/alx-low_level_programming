#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return : pointer who points to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
		s1 = "NULL";
	if (s2 == NULL)
		s2 = "NULL";

	p = malloc((x + y) * sizeof(char) + 1);
	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];
	for (y = 0; s2[y] != '\0'; x++, y++)
		p[x] = s2[y];
	if (p == NULL)
		return (NULL);
	p[x] = '\0';
	return (p);
}


