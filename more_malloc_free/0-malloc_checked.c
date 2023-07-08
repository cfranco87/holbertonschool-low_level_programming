#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - malloc checker
 *@b: unsigned int b
 *Return: always success
 */

void *malloc_checked(unsigned int b)
{
	int *mc;

	mc = (int *)malloc(b * sizeof(int));
	if (mc == NULL)
	{
		exit(98);
	}
	return (mc);
}
