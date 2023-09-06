#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: counts arguments
 * @av: arguments
 *
 * Return: returns NULL if ac or av is NULL
 */

char *argstostr(int ac, char **av)
{
	/* declare variable */
	int count1, count2, total_len, index;
	char *results;

	/* check if any of ac or av is NULL */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 0;

	for (count1 = 0; count1 < ac; count1++)
	{
		total_len += strlen(av[count1]) + 1;
		/* + 1 for newline char */
	}

	results = (char *) malloc(total_len * sizeof(char));
	if (results == NULL)
		return (NULL);

	index = 0;

	for (count1 = 0; count1 < ac; count1++)
	{
		for (count2 = 0; av[count1][count2]; count2++)
			results[index++] = av[count1][count2];
		
		results[index++] = '\n'; /* add newline cahr */
	}

		results[index] = '\0'; /* null terminate the string */

		return (results);
}
