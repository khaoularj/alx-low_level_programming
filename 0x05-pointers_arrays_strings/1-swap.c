#include "main.h"
/**
 * swap_int - the function that swaps the values of two integers.
 *@a: the first value
 *@b: the second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
