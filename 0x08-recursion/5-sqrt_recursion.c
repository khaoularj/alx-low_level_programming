#include "main.h"
/**
 *_sqrt_recursion-the function that returns the natural square root of a number
 * @n: the input number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (n);
	else if (x * x <= n)
		return (_sqrt_recursion(n, x + 1));
}
