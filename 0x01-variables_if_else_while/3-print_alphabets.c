#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: program that prints lowercase
 * and then uppercase using only putchar
 * putchar function is used to display/write one character
 * Return: Always 0 (success)
 */

int main(void)
{
	/**
	 * Declare variable lc as lower_case using char
	 * Declare variable uc as upper_case using char
	 */
	char lc, uc;

	/**
	 * Use for statement to disoplay your characters
	 * use putchar to display your
	 * lower and upper case characters respectively
	 */
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n'); /*use putchar to move curson to new line*/

	return (0);
}
