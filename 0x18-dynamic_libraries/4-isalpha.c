#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: checked parameter
 * Return: 1 if it's a letter, lowercase or uppercase
 * and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
