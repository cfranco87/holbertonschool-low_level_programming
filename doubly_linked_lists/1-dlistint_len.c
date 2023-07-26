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
	const dlistint_t *current = h;

	while (h != NULL)
	{
		printf("%d\n", current->n);
		current  = current->next;
		count++;
	}
	printf("-> %lu elements\n", count);
	return (count);
}
