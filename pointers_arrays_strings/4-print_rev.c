#include "main.h"
#include <stdio.h>

/**
 *print_rev - putting things in
 *@s: sssss
 *Return: sucess
 */

void print_rev(char *s)
{
		while (*s)
			_putchar(*s--);
			_putchar('\n');

}
