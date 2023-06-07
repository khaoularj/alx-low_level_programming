#include "main.h"
/**
 * factorial -  the function that returns the factorial of a given number
 * @n : the parameter
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
