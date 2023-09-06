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
	int count1, count2, size = ac, index;
	char *results;

	/* check if any of ac or av is NULL */
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (count1 = 0; count1 < ac; count1++)
	{
		for (count2 = 0; av[count1][count2]; count2++)
			size++;
	}

	results = (char *)malloc(sizeof(char) * size + 1);

	if (results == NULL)
		return (NULL);

	index = 0;

	for (count1 = 0; count1 < ac; count1++)
	{
		for (count2 = 0; av[count1][count2]; count2++)
			results[index++] = av[count1][count2];
		
		results[index++] = '\n'; /* add newline cahr */
	}

		results[size] = '\0'; /* null terminate the string */

		return (results);
}
