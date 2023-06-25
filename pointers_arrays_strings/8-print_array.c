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

	int i = 0;

	for (i = 0; i < 5; i++)
		a[i] = n;


	for (i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
