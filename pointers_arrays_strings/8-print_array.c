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
	int arr[] = {-198, 298, 402, -1024, 98};

	for (i = 0; i < 5; i++)
		a[i] = n;

	for (i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
}
