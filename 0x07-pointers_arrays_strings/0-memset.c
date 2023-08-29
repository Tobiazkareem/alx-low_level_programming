#include "main.h"

/**
 * _memset - functions that fill memory with a constant byte
 * @s: pointer s
 * @n: first n bytes
 * @b: character b
 *
 * Return: returns the pointer to the memory s
 */

char *_memset(char *s, char b, unsigned  int n)
{
	/* function to  fill a memory area with a constant byte */

	/* declare usigned int i */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
