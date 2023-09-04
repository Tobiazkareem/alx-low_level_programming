#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: number of arguments in int
 * @argv: pointer to arguments
 *
 * Return: Return 1 Error
 */

int main(int argc, char *argv[])
{
	/* argc counts the arguments */
	/* if statement to check if two arguments is recieved */
	int multiply, first_number, second_number;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first_number = atoi(argv[1]);
		second_number = atoi(argv[2]);
		multiply = first_number * second_number;
		printf("%d\n", multiply);
	}
	return (0);
}
