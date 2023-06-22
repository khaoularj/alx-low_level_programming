#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the function that returns the sum of all its parameters
 * @n:number of arguments passed to the function
 * Return:the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list args;
	{
	if (n == 0)
		return (0);
	}

	va_start(args, n);

	for (x = 0; x < n ; x++)
	{
		int result = va_arg(args, int);

		sum = sum + result;
	}
	va_end(args);
	return (sum);
}
