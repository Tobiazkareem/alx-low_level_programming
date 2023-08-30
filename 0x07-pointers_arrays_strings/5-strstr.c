#include "main.h"

/**
 * _strstr - locates a string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the begining of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	/* return haystack if needle is empty */
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			/*return pointer to the begining of the substring */
			return (haystack);
		}
		haystack++;

	}

	return ('\0');/*return NULL is substring is not found */
}
