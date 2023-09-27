#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: Pointer to a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current1, *temp1;

	if (head == NULL || *head == NULL)
		return;

	current1 = *head;

	while (current1 != NULL)
	{
		temp1 = current1->next;
		free(current1);
		current1 = temp1;
	}

	*head = NULL;
}
