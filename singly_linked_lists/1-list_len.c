#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *list_len - singly linked list
 *@h: string - (malloc'ed string)
 *Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
		h = h->next;
		count++;
		}
		else
		{
		h = h->next;
		count++;
		}
	}

	return (count);
}
