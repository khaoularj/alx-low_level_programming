#include <stdio.h>

/**
 * main - the main function
 * Return:0
 */

int main(void)

{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		if (j != 'e' && j != 'q')
			putchar(j);
	putchar('\n');
	return (0);
}

