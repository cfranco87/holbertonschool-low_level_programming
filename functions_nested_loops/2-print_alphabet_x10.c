#include "main.h"

/**
 * print_alphabet_x10 - multiple
 *
 * Return: always (sucess)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i++ <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
	}
}
