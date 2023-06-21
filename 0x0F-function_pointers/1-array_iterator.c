#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - the function that executes a function givein
 * as a parameter on each element of an array
 * @size:the size of the array
 * @action:pointer to the function
 * @array:pointer to the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for ( x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
