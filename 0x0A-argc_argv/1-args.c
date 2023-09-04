#include <stdio.h>

/**
 * main - program that prints the number of arguments passed
 * @argc: counts number of arguments
 * @argv: arguments
 *
 * Return: Always 0 success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	/* printf argc to show no of arguments */
	printf("%d\n", argc - 1); /* argv[] starts counting from 0 */
	/* thats why we substract 1 froma argc to get the rigth count */

	return (0);
}
