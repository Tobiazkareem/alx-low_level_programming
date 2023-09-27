#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 *
 * @h: singly linked list to print
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count1 = 0;

	while (h != NULL)
	{
		count1++;
		h = h->next;
	}

	return (count1);
}
