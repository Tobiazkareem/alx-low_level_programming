#include "main.h"

/**
 * _strncat - concatenate string and use at most n bytes from src
 * @dest: destination
 * @src: source of the string to concatenate
 * @n: integer
 *
 * Return: return dest_destination
 */

char *_strncat(char *dest, char *src, int n)
{
	/* declare variable count and destination length */
	int count = 0, dest_length = 0;

	while (dest[count++])
		dest_length++;

	for (count = 0; src[count] && count < n; count++)
		dest[dest_length++] = src[count];

	return (dest);
}
