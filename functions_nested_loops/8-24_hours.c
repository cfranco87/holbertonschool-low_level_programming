#include "main.h"

/**
 * jack_bauer- counting time
 * Return: always 0
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar(h / 10);
			_putchar(h % 10);
			_putchar(':');
			_putchar(m / 10);
			_putchar(m % 10);

			_putchar('\n');
		}
	}
}
