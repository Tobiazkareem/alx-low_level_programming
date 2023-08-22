#include "main.h"

/**
 * _strlen - lenght of string
 * @s: character
 *
 * Return: return length of the string
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
