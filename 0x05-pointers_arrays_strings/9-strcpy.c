#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination to return
 * @src: string to copy
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	/*while loop */
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
