#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Program to assign a random number to a variable n
 * n will store random number anytime
 * the program is run
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lst_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*to get the last digit of a number is to use modulus*/
	/*example last digit = 12345783 % 10*/
	/*answer = 1234578.3 = 3*/
	/*3 is the last digit*/
	lst_dig = n % 10;

	/*use an if else if statement*/
	/*last digit is lst_dig*/
	if (lst_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dig);
	}
	else if (lst_dig < 6 && lst_dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dig);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dig);
	}
	return (0);
}
