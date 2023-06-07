#include "main.h"
/**
 * is_prime_number - the function that checks if it's a prime number or not
 * @n: parameter
 * Return: 1 if it's a prime number
 */
int is_prime_number(int n)
	if (n <= 1)
		return (0);
/**
 * the_actual_prime_number - function that calculates if it's a prime number
 * @n: the input number
 * @x:parameter
 * Return: 1 if it's a prime number
 */
int the_actual_prime_number(int n, int x)
{
	if (n % x == 0)
		return (0);
	return (the_actual_prime_number(n, x - 1));
}
