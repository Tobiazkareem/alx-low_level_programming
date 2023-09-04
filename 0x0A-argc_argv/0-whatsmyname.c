#include <stdio.h>

/**
 * main - print the name of the program using argv[0]
 * @argc: counts the number of arguments
 * @argv: argument
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	/* check to see if an argument is provided using argc */
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		/* no augment supplied */
		printf("Program name was not provided");
	}

	return (0);
}
