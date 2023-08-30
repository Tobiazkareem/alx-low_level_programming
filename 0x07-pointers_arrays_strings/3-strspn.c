#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: consist only of bytes
 *
 * Return: returns no of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	/**
	 * calculate the length of the prefix substring of string s
	 * consisting only of char from the accept string.
	 * iterates through the characters of s and for each char,
	 * checks if it exists in the accept string.
	 */
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			break;
			/*stop if no char is found */
		}
		s++;
	}

	return (count);
}
