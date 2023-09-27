#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: pointer  to a pointer pointing to the first node of the list
 * @n: integer to be stored in the new node
 *
 * Return: address of the nnew element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current1;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current1 = *head;
	while (current1->next != NULL)
	{
		current1 = current1->next;
	}

	current1->next = new_node;
	return (new_node);
}
