#include "main.h"
/**
 * print_alphabet - the function that print the alphabet
 * _putchar : print
 * Return: 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
}
