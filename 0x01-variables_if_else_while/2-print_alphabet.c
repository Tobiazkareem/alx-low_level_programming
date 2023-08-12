#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: program that prints alphabet in lowercase
 * using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	/**
	 * declare variable lower_case- lc with char
	 * unlike other programming language
	 * C does not have a string type
	 * we use char to create an array of characters
	 * using double quotes for string and single for character
	 */
	char lc;

	/**
	 * putchar function can write/display one character
	 * we would use a for statement to display lower
	 * character a..z
	 */
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
