#include "main.h"

/**
 * _strcmp - compare two strings
 * return 0 if equal, return > if greater
 * and < if s1 is less than s2 strcmp(s1, s2)
 * @s1: first string to compare
 * @s2: second string
 *
 * Return: return compare difference
 *
 */

int _strcmp(char *s1, char *s2)
{
	/* while loop */
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			/* return difference in ascii values */
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
	/* return last character difference */
}
