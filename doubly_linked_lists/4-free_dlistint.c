#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 *free_dlistint - free doubly link list memory
 *@head: new head of node
 *Return: nodes
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
			free(temp);
	}
}
