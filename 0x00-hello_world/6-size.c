#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: sizeof() prints the size of various data types
 * example: printf(The size of char is: %lu byte(s), sizeof(char))
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(S)\n",  sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);

}
