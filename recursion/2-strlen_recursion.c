#include "main.h"
#include "stdio.h"

/**
 *_strlen_recursion - string length
 *@s: string
 *Return: always success
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
	}
	return (0);
}
