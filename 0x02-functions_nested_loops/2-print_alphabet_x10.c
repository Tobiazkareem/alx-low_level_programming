#include "main.h"

/**
 * print_alphabet_x10 - function to print 10times the alphabet
 *
 * Description: write a function to print 10 times
 * lower_case
 *
 * I am using _putchar twice in this code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	/*declare variables*/
	int n = 0;
	char c; /*declare lower_case variable as c*/

	/*while function to create a nested loop*/
	while (n < 10)
	{
		/*nested while function to prints alphabet*/
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		n++;
	}
}
