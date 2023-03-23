#include "main.h"

/**
 *positive_or_negative - ckecks if a number is positive or negative
 *@i: checked number
 *Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);

}
