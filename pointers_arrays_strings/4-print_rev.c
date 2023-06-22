#include "main.h"
#include <stdio.h>

/**
 *_puts - putting things in
 *@str: string
 *Return: sucess
 */

void _puts(char *str)
{
		while (*str)
			_putchar(*str--);
			_putchar('\n');

}
