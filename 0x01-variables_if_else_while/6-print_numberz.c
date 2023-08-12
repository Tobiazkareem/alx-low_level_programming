#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints all single digits
 * of base 10 using putchar only
 * Return: Always 0 (Success)
 */

int main(void)
{
	/**
	 * Declare variable int n
	 * digits would be displayed in integer
	 * use only putchar
	 */
	int n;

	/**
	 * use for function
	 * set condition to display the digits
	 * set statement
	 */
	for (n = 0; n < 10; n++)
	{
		/**
		 * putchar is used to display character
		 * to use it to display integer
		 * forcefully convert integer to character
		 * inside the putchar function by
		 * adding + '0' to the variable
		 */
		putchar(n + '0');
	}
	putchar('\n'); /*new line */
	return (0);
}
