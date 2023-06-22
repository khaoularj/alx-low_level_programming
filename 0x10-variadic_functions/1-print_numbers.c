#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - the function that prints numbers, followed by a new line
 * @separator: the string to be printed
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int number;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		number = va_arg(args, int);

		printf("%d", number);
		if (x < n - 1 && separator != NULL)
		printf("%s", separator);
	}
		va_end(args);
		printf("\n");
}
