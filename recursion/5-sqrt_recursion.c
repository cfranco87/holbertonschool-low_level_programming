#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - sq root
 *@n: anything
 *Return: always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt_recursion(n));
}
