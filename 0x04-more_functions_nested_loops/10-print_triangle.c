#include "main.h"
/**
 *print_triangle - the function that prints a triangle
 *@size: the size of the triangle
 *Return: 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 1 ; x <= size ; x++)
		{
			for (y = x ; y < size ; y++)
			{
				_putchar(' ');
			}
		for (y = 1 ; y <= size ; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
