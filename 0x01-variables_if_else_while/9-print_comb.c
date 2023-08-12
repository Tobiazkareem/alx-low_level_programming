#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Program taht prints all possible combination
 * of a single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	/**
	 * not allowed to use any variable char
	 * declare variable int n
	 */

	int n;

	/*use for function */
	for (n = 0; n < 10; n++)
	{
		/*display the number by converting int to character */
		/*use + '0' to convert */
		putchar((n % 10) + '0');
		/*statement to skip the rest of the loop body */
		if (n == 9)
			continue;

		/*set commas using putchar */
		putchar(',');

		/*set a followed space after the comma */
		putchar(' ');
	}
	/*set a new line using putchar */
	putchar('\n');

	return (0);
}
