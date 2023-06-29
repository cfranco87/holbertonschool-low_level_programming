#include "main.h"
#include <stdio.h>

/**
 *factorial - factorial
 *@n: anything
 *Return: always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		int i = 1;

		for (i = 1; i <= n; i++)
		{
			n *= i;
		}
	}

	return (n);
}
