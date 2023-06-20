#include "main.h"

/**
 * times_table - times n
 * Return: always success
 */

void times_table(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x * '0');
		if (x < 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}

