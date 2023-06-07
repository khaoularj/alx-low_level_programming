#include "main.h"
/**
 *_strlen_recursion - the function that returns the length of a string
 *@s: the string
 *Return: 0
 */
int _strlen_recursion(char *s)
{
	int lng; /*lng: define the lenght*/

	lng = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else if (*s > '\0')
	{
		lng++;
		lng += _strlen_recursion(s + 1);
	}
	return (lng);
}


