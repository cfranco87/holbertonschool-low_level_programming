#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 *add_node - add new node to list
 *@head: new head of node
 *@str: string within node
 *Return: nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
