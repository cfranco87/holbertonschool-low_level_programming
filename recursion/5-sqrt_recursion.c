#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - sq root
 *@n: anything
 *Return: always 0
 */

int _sqrt_recursion(int n)
{
	int i = n * n;

	if (n * n != i)
		return (-1);

	i *= _sqrt_recursion(n * n);

		return (i);
}
