#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program that prints the alphabet in lowercase
 * prints all letters except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	/**
	 * Declare variable lower case in char
	 * use putchar twice only
	 */
	char lc;

	/*Use for() function to print characters*/
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		/**
		 * this condition checks to see
		 * if lc lower case is NOT equal to either q or e
		 */

		if (!(lc == 'e' || lc == 'q'))
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
