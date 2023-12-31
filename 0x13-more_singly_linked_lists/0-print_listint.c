#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: singly linked list to print
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count1++;
	}

	return (count1);
}
