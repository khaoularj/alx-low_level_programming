#include "main.h"
/**
 * _islower - function that checks for lowercase
 * @c: printed parameter
 * Return: 1 if it's a lower case
 * and  0 if not a lower case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
