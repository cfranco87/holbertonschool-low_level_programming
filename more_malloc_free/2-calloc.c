#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - dynamic memory allocation
 *@nmemb: number of elements, each one with size of size bytes
 *@size: size of bytes
 *Return: always success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *clear;
	int n = nmemb, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	clear = calloc(nmemb, sizeof(int));


	for (i = 0; i < n; i++)
	{
		clear[i] = i + 1;
	}

	free(clear);
	return (clear);
}
