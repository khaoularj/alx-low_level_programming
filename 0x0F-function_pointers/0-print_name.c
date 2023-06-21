#include "function_pointers.h"

/**
 * print_name - the function that prints a name
 * @name: pointer to the string representing the name
 * @f: the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
