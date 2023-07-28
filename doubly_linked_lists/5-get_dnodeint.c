#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 *get_dnodeint_at_index - get node
 *@head: new head of node
 *@index: index
 *Return: nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	unsigned int current_index = 0;

	while (temp != NULL && current_index < index)
	{
		temp = temp->next;
		current_index++;
	}
		if (temp == NULL)
		{
			return (NULL);
		}
	return (temp);
}
