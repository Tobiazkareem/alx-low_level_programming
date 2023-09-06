#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cont_str; /* concatenate string */
	size_t length1;
	size_t length2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);

	cont_str = (char *)malloc(length1 + length2 + 1);

	/* check if concatenate str is null */
	if (cont_str == NULL)
		return (NULL);

	strcpy(cont_str, s1);
	strcat(cont_str, s2);

	return (cont_str);
}
