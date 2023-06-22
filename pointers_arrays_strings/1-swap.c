#include "main.h"
#include <stdio.h>
/**
 *swap_int - swapping
 *@a: letter 1
 *@b: letter 2
 *Return: always success
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
