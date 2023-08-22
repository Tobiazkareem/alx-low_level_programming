#include "main.h"

/**
 * rev_string - reverse string character
 * @s: string
 *
 */

void rev_string(char *s)
{
	int length = 0, c = 0;
	char store; /*store string */

	while (s[length] != '\0')
		length++;

	/* print reverse */
	for (c = length - 1; c >= length / 2; c--)
	{
		store = s[c];
		s[c] = s[length - c - 1];
		s[length - c - 1] = store;
	}
}
