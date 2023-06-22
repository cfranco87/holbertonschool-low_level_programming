#include "main.h"
#include <stdout.h>

/**
 *_puts - putting things in
 *@str: string
 *Return: always success
 */

void _puts(char *str)
{
	char  c;

	for char(c = 0; str[c]; c++)
	{
		_puts(str[c]);
		_putchar('\n')
	}
}
