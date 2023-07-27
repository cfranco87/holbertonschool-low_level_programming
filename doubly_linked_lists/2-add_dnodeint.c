#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 *add_dnodeint - add new node to list
 *@head: new head of node
 *@n: number of node
 *Return: nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	if (temp->n == '\0')
	{
		free(temp);
		return (NULL);
	}

	temp->prev = NULL;
	temp->next = *head;
	*head = temp;

	return (temp);
}
