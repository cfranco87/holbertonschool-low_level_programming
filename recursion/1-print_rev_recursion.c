#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - recursion
 *@s:string
 *Return: always success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
