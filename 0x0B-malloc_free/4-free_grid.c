#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * previously created by alloc_grid function
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	/* declare variable count */
	int count;

	if (grid == NULL || height <= 0)
		return; /* no grid to free*/

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}

	free(grid);
}
