#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees dimensional grid
 * @grid: first input
 * @height: second input
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; height > x; x++)
		free(grid[x]);
	free(grid);
}
