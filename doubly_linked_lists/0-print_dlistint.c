#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_dlistint - doubly linked list
 *@h: string - (malloc'ed string)
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;

		if (h != NULL)
			printf("\n");
	}
		printf("\n");
		return (count);
}
