#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - recursion
 *@s:string
 *Return: always success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
	{
		return;
	}
}
