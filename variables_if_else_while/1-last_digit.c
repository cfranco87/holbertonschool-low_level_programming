#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - last digits
 *Return: always (sucess)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % d;

	if (ld > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, ld);
	}

	else if(ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}

	else(ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
