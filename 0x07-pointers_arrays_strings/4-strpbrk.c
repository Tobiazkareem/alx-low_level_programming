#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: set of bytes to be searched for
 *
 * Return: return a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	/**
	 * function searches the string s for the first
	 * occurence of any of the bytes in the accept string
	 * iterates through the character of s and checks if each char exists
	 * in the accpet string
	 */

	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
				/* return pointer to the first matching byte */
			}
		}
		s++;
	}
	return ('\0');
}
