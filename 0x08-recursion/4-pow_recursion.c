#include "main.h"
/**
 *_pow_recursion - the function that returns the value of x^y
 *@x: the value
 *@y: the power
 *Return:the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}