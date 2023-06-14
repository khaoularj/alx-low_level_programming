#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -the function that multiplies two numbers
 * @argc:argument count
 * @argv:argument vector
 * Return: on success 0, on fail, error
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d\n", result);
	return (0);
}
