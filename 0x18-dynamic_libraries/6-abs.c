#include "main.h"

/**
 * _abs - the function that computes the absolute value of an integer
 * @x: checked parameter
 * Return: the value of x
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
