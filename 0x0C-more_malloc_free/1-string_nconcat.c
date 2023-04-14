#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-the  function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from s2
 * Return: on success pointer  to a newly allocated space in memory
 * on fail, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x;
	unsigned int y;
	unsigned int len_s1;
	unsigned int len_s2;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0' && len_s2 < n; len_s2++)
		;

	p = malloc(len_s1 + n + 1);

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];
	for (y = 0; y < n; y++)
		p[x + y] = s2[y];

	p[x + y] = '\0';
	return (p);
}
