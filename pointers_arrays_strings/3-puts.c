#include "main.h"
#include <stdio.h>

/**
 *_puts - putting things in
 *@str: string
 *Return: always success
 */

void _puts(char *str)
{
		while (*str)
			_putchar(*str++);
		_putchar('\n');

}
