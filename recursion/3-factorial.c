#include "main.h"
#include <stdio.h>

/**
 *factorial - factorial
 *@n: anything
 *Return: always 0
 */

int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	i  *= factorial(n - 1);

	return (i);
}
