#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 *add_node_end - add new node to list
 *@head: new head of node
 *@str: string within node
 *Return: nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;

	if (str == NULL)
		return (NULL);

	end = malloc(sizeof(list_t));

	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}

	end->len = strlen(str);
	end->next = NULL;

	if (*head == NULL)
		*head = end;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}

	return (end);
}
