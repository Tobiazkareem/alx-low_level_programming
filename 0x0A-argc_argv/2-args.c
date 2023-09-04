#include <stdio.h>

/**
 * main - prints all argument it recieves
 * @argc: counts argument
 * @argv: pointer to the argument
 *
 * Return: Always ) success
 */

int main(int argc, char *argv[])
{
	/* declare a variable count */
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
