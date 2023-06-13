#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid-function that returns a pointer to 2 dimensional array of integers
 * @width: first input
 * @height: second input
 * Return: pointer on success, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int x;
	int y;

	p = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || p == NULL)
		return (NULL);
	for (x = 0; height > x; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(p[y]);
			free(p);
			return (NULL);
		}
		for (y = 0; width > y; y++)
			p[x][y] = 0;
	}
	return (p);
}
