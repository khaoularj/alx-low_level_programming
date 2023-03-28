#include "main.h"
/**
 * print_rev - the function that prints a string, in reverse
 * @s:parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int count = 0;
	int x;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (x = count ; x > 0 ; x--)
	{
		_putchar(*s);
		s--
	}
	_putchar('\n');
}
