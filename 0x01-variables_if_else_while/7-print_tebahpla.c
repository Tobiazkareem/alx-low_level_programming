#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Reverse lowercase alphabet
 * using putchara and reverse function
 * Return: Always 0 (Success)
 */

int main(void)
{
	/**
	 * Declare variable char lower_case lc
	 * reverse the character
	 */
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	/*display new line */
	putchar('\n');

	return (0);
}
