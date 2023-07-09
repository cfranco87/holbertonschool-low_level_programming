#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *free_grid - free grid array
 *@grid: grid from last project
 *@height: height
 *Return: always success
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	
	free(grid);
}
