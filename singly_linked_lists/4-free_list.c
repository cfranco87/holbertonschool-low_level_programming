#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_list - free list
 *@head: pointer to structure
 *Return: the number of nodes
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
