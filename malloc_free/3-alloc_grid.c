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
	int **g = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	g = malloc(width * sizeof(int *));
	if (g == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(g[j]);
			}
			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}
