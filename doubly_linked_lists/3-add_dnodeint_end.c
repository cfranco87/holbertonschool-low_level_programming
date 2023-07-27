#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 *add_dnodeint_end - add new node to list
 *@head: new head of node
 *@n: number of node
 *Return: nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}
