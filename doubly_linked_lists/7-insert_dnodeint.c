#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 *insert_dnodeint_at_index -insert node
 *@h: new head of node
 *@idx: inserted index
 *@n: integer n
 *Return: nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *h;
	unsigned int i = 0;

	if (!new)
		return (NULL);

	new->n = n;
	if (!idx)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		free(new);
		return (NULL);
	}

	new->prev = temp;
	new->next = temp->next;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}

