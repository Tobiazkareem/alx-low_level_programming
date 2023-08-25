#include "main.h"

/**
 * leet - encodes a string
 * @str: string
 *
 * Return: return string
 */

char *leet(char *str)
{
	int count = 0, count2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[count])
	{
		for (count2 = 0; count2 <= 7; count2++)
		{
			if (str[count] == leet[count2] ||
				str[count] - 32 == leet[count2])
				str[count] = count2 + '0';
		}
		count++;
	}
	return (0);
}
