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

	printf("[");

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s", h->str);
			printf(" (%u)", h->len);
		}
		else
		{
			printf("[0] (nil)");
		}

		h = h->next;
		count++;

		if (h != NULL)
		{
			printf(", ");
		}
	}

	printf("]\n");

	return (count);
}
