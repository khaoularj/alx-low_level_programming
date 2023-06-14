#include "main.h"
#include <stdio.h>
/**
 * main - the function that prints all arguments it receives
 * @argc:argument count
 * @argv:argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
