#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - the main function
 * Return:0
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	/* your code goes there */
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is zero", n, x);
	else if (x < 6 && x != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	printf("\n");
	return (0);
}
