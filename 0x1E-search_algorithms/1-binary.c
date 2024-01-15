#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end;
	size_t mid_index, i;

	if (array == NULL)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid_index = start + ((end - start) / 2);
		if (value == array[mid_index])
		{
			return (mid_index);
		}
		else if (value > array[mid_index])
		{
			start = mid_index + 1;
		}
		else if (value < array[mid_index])
		{
			end = mid_index - 1;
		}
	}
	return (-1);
}
