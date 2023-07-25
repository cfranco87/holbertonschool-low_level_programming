#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_list - singly linked list
 *@h: string - (malloc'ed string)
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf(" ");

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)");
		}

		h = h->next;
		count++;

		if (h != NULL)
		{
			printf("\n");
		}
	}

	printf("\n");

	return (count);
}
