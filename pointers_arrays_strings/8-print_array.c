#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - arrays and pointers
 * @a: array
 * @n: value
 * Return: Success
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < 5; i++)
		a[i] = n;

	int *a[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
