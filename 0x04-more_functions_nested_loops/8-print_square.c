#include "main.h"
/**
 *print_square - the function that prints a square
 *@size: size of the square
 *Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	for (x = 0 ; x < size ; x++)
	{
		for (y = 0 ; y < size ; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
