#include "main.h"
/**
 * _strlen_recursion - the function that returns the length of a string
 * @s: the parameter
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int lng; /*lng: define the length*/

	lng = 0;

	if (*s > '\0')
	{
		lng++;
		lng += _strlen_recursion(s + 1);
	}
	return (lng);
}
