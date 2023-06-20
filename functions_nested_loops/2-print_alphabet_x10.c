#include "main.h"

/**
 * print_alphabet_x10 - multiple
 * Return: always (sucess)
 */

void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x * 10);

		_putchar('\n');
}
