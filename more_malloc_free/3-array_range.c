#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - array in malloc
 *@min: minimum elements
 *@max: maximum elements
 *Return: always success
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = min + 1;
	}
	return (ar);
}
