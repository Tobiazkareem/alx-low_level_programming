#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: width of the grid
 * @height: height
 *
 * Return: returns NULL on failure
 */

int **alloc_grid(int width, int height)
{
	/*declare variables */
	int count1, count2;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	/* check if grid is null and return null if true */
	if (grid == NULL)
		return (NULL);

	for (count1 = 0; count1 < height; count1++)
	{
		grid[count1] = (int *)malloc(width * sizeof(int));

		if (grid[count1] == NULL)
		{
			/* check if memory allocation fails in the row */
			/* free previous allocated rows and return NULL */
			for (count2 = 0; count2 < count1; count2++)
			{
				free(grid[count2]);
			}
			free(grid);
			return (NULL);
		}

		for (count2 = 0; count2 < width; count2++)
		{
			grid[count1][count2] = 0;
		}
	}

	return (grid);
}
