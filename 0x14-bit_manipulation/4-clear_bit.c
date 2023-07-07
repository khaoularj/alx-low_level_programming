#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the given number
 * @index: the index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = ~(1UL << index);

	if (index > 63) /*an ULong typically has 64 bits,from 0 to 63*/
		return (-1);
	*n &= x;
	return (1);
}
