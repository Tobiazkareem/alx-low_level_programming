#include <stdio.h>

/**
 * main - check the code
 *
 * Return: return 1
 */

int main(void)
{
	FILE *file;

	file = fopen("101-password", "w");

	if (file == NULL)
	{
		perror("Failed to open file");
		return (1);
	}

	fprintf(file, "Congratulations!");

	fclose(file);
	return (0);
}
