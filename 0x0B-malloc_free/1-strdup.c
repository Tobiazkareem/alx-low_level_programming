#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: string
 *
 * Return: returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	/**
	 * declare variable duplicate
	 * return null is str is null
	 */
	char *duplicate_str;

	if (str == NULL)
		return (NULL);

	duplicate_str = (char *)malloc(strlen(str) + 1);

	/* check if duplicate string is null */
	if (duplicate_str == NULL)
		return (NULL);

	strcpy(duplicate_str, str);

	return (duplicate_str);
}
