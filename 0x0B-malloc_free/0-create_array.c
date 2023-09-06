#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: character
 *
 * Return: returns a pointer to the array, or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *array;

	/* if size is 0, return NULL */
	if (size == 0)
		return (NULL);

	/* initialize an array of chars with a specific char */

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
