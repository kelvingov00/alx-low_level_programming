#include "main.h"

/**
 * free_grid - allocates a grid
 * Description: a function that frees a grid
 * @grid: width of grid
 * @height: height of grid
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
