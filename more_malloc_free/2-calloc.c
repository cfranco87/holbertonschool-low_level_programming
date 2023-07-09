#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - dynamic memory allocation
 *@nmemb: number of elements, each one with size of size bytes
 *@size: size of bytes
 *Return: always success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *clear;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	clear = malloc(nmemb * size);
	if (clear != NULL)
	{
		memset(clear, 0, nmemb * size);
	}
	return (clear);
}
