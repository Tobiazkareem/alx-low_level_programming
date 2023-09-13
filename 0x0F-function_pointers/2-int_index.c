#include "function_pointers.h"

/**
 * int_index - search for int value in an array of int
 * @array: array
 * @size: size of array
 * @cmp: function pointer to compare
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
			return (count);
	}
	return (-1);
}
