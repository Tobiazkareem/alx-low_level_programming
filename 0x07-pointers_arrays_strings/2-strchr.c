#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string s
 * @c: character
 *
 * Return: returns a pointer to the first occurence
 * or the cahracter c in the string s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	/**
	 * functions iterates throjugh the string s and checks
	 * each char to see if its matches the char c
	 */

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
