#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free listint
 * @head: pointer to the head of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *current1;

	while (head != NULL)
	{
		current1 = head;
		head = head->next;
		free(current1);
	}
}
