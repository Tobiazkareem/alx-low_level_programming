#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: pointer to argument
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	/* declare variables add, count1 and count2 */
	int add = 0, number, count1, count2;

	/*return 0 if argument has no number passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (count1 = 1; count1 < argc; count1++)
	{
		for (count2 = 0; argv[count1][count2] != '\0'; count2++)
		{
			if (!isdigit(argv[count1][count2]))
			{
				/* check if argument contains non digit xters */
				printf("Error\n");

				return (1);
			}
		}

		/* convert argument to interger using atoi */
		number = atoi(argv[count1]);

		if (number < 0)
		{
			/* skip if argument is negative */
			continue;
		}

		add += number;
	}

	printf("%d\n", add);

	return (0);
}
