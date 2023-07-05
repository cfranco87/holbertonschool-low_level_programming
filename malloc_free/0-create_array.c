#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creating malloc array
 *@size: type
 *@c: character
 *Return: always success
 */

char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == 0)
		return (NULL);

	r = malloc(sizeof(char) * size);

	if (!r)
		return (NULL);


	for (i = 0; i < size; i++)
		r[i] = c;

	return (r);
}



