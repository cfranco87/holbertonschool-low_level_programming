#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *dlistint_len - doubly linked list number of elements
 *@h: string - (malloc'ed string)
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h  = h->next;
		count++;
	}
	printf("-> %lu elements\n",(unsigned long) count);
	return (count);
}
