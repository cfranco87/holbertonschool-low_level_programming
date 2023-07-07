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

	for (i = 0; i < width; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		g[j] = malloc(height * sizeof(int));
		if (g[j] == NULL)
		{
			return (NULL);
		}
	}
		g[i][j] = 0;
		free(g);

		return (g);
}
