#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cont; /*concatenates */
	unsigned int length = n, count;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count]; count++)
		length++;

	cont = malloc(sizeof(char) * (length + 1));

	if (cont == NULL)
		return (NULL);

	length = 0;

	for (count = 0; s1[count]; count++)
		cont[length++] = s1[count];

	for (count = 0; s2[count] && count < n; count++)
		cont[length++] = s2[count];

	cont[length] = '\0';

	return (cont);
}
