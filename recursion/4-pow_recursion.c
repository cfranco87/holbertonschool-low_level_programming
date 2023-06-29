#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - power
 *@x: interger
 *@y: interger2
 *Return: always success
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	i *= _pow_recursion(x, y - 1);

	return (i);
}

