#include "main.h"
#include <stdio.h>
#include <math.h>


/**
 *is_prime_number - prime number
 *@n: number
 *Return: always success
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);
	for (i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return (1);
	}
	return (is_prime_number(n));
}
