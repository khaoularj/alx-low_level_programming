#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * for reason to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: n of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	int count = 0;
	unsigned long int crnt;
	unsigned long int res = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		crnt = res >> j;
		if (crnt & 1)
			count++;
	}

	return (count);
}
