#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the function that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		char *num = argv[x];

		for (y = 0; num[y] != '\0'; y++)
		{
			if (!isdigit(num[y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
	}
	printf("%d\n", sum);
	return (0);
}
