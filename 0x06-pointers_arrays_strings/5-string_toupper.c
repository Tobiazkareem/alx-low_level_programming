#include "main.h"

/**
 * string_toupper - change from lower to upper case
 *
 * @str: string to change to upper
 * Return: return str
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 32;

		count++;
	}
	return (str);
}
