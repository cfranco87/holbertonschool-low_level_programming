#include "main.h"
#include <stdio.h>

/**
 *reverse_array- rev array
 *@a: array
 *@n: anything
 *Return: always success
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
