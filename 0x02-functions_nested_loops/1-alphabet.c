#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: function print_alpahbet(void) function that prints the alphabet
 * in lowercase
 * i will be using for function()
 * print_alphabet: prints alphabet
 *
 * Return: Always 0
 */

/*call the prototype function in main.h*/
void print_alphabet(void)
{
	/* declare a variable c for lower_case alphabet*/
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
_putchar('\n');
}
