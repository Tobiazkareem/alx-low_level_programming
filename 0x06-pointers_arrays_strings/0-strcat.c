#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: destination
 * @src: source
 *
 * Return: return destination dest
 */

char *_strcat(char *dest, char *src)
{
	/* declare  count and length */
	int count = 0, dest_length = 0;

	while (dest[count++])
		dest_length++;

	for (count = 0; src[count]; count++)
		dest[dest_length++] = src[count];

	/* terminating null byte */
	/* dest = '\0';*/

	return (dest);
}
