#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the string
 * Return: the converted number or 0 in case of error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '0')
		{
			value <<= 1;
		}
		else if (b[i] == '1')
		{
			value <<= 1;
			value |= 1;
		}
	}
	return (value);
}
