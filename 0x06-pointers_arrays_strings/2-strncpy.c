#include "main.h"

/**
 * _strncpy - a function that copies string
 * @dest: destination that stores the string
 * @src: source the string will be copied from
 * @n: number of bytes to copy
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, length_src = 0;
	/* declare variables legnth and count */

	while (src[count++])
		length_src++;

	for (count = 0; src[count] && count < n; count++)
		dest[count] = src[count];

	for (count = length_src; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
