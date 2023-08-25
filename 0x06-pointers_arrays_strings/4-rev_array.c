#include "main.h"

/**
 * reverse_array - reverse an integer array
 * @a: pointer to array variable
 * @n: number of element in the array
 *
 */

void reverse_array(int *a, int n)
{
	/* declare variable left nd right */
	int left = 0;
	int right = n - 1;
	int store;

	while (left < right)
	{
		/* swap left to right and right to left */
		store = a[left];
		a[left] = a[right];
		a[right] = store;

		/* move pointers to each other */
		left++;
		right--;
	}
}
