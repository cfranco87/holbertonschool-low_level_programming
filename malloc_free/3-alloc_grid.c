#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - allocate grid
 *@width: width
 *@height: height
 *Return: always success
 */

int **alloc_grid(int width, int height)
{
	int **integer;
	int x, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	integer = malloc(width * sizeof(int));
	if (integer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		integer = malloc(width * sizeof(int));
		if (integer == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(integer[j]);
			}
			free(integer);
			return (NULL);
		}
	}

	for (x = 0; x < width * height; x++)
	{
		integer[x / width][x % width] = x + 1;
	}

	return (integer);
}
