#include "main.h"
/**
 * _print_rev_recursion - the function that prints a string in reverse
 * @s: the parameter
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
