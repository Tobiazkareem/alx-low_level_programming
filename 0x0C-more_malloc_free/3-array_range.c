#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of int
 * @min: value one of array
 * @max: value two
 *
 * Return: if faill, NULL
 */

int *array_range(int min, int max)
{
	/* declare variable */
	int *result, y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	/* fill array with min to max values */
	for (y = 0; y <= max - min; y++)
		result[y] = min + y;
	/* return result */

	return (result);
}
