#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 *delete_dnodeint_at_index - delete node
 *@head: new head of node
 *@index: inserted index
 *Return: nodes
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
