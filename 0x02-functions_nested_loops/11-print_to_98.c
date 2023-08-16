#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 *
 * @n: number where to print from to 98
 *
 */

void print_to_98(int n)
{
	/*declare variable a and b*/
	int a, b;
	/*if statement*/
	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
}
