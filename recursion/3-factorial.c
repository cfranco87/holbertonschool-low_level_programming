#include "main.h"
#include <stdio.h>

/**
 *factorial - factorial
 *@n: anything
 *Return: always 0
 */

int factorial(int n)
{
	int i;
	int r;

	r = 1;
	i = 1;

	while (i < n)
	{
		r = r * i;
		i++;
	}

	return (r);
}
