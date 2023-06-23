#include "main.h"
#include <stdio.h>

/**
 *print_rev - putting things in
 *@s: sssss
 *Return: sucess
 */

void print_rev(char *s)
{
	int len = 0, r;

	while (s[r++])
		len++;

	for (r = len - 1; r >= 0; r--)
		_putchar(s[r]);

		_putchar('\n');
}
