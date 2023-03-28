#include "main.h"
/**
 * puts_half - the function that prints half of a string
 * @str: parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int x;
	int L = 0; /**L - the length*/

	for (x = 0 ; str[x] != '\0' ; x++)
		L++;
	if (L % 2 == 0)
	{
		for (x = L / 2 ; str[x] != '\0' ; x++)
			_putchar(str[x]);
		_putchar('\n');
	}
	else if (L % 2 != 0)
	{
		for (x = (L - 1) / 2 ; str[x] != '\0' ; x++)
			_putchar(str[x]);
		_putchar('\n');
	}
}
