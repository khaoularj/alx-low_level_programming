#include <stdio.h>
/**
 * main - the main function
 * Return: 0
 */

int main(void)
{
	int k;
	char l;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	for (l = 'a' ; l <= 'f' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}

