#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints all numbers of base 16 in lowercase
 * use only putchar
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
	/**
	 * Declare char variable letters lt
	 * Declare int number n
	 */
	char lt;
	int n;

	/**
	 * use for function
	 * set conditions
	 */
	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	/**
	 * for function for letter lt
	 */
	for (lt = 'a'; lt <= 'f'; lt++)
		putchar(lt);

	/*display new line */
	putchar('\n');

	return (0);
}
