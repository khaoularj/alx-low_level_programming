#include "main.h"
/**
 * is_prime_number - the function that checks if it's a prime number or not
 * @n: parameter
 * Return: 1 if it's a prime number
 */
int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);
	{
	for (x = 2; x * x <= n; x++)
	if (n % x == 0)
		return (0);
	}
	return (1);
}


