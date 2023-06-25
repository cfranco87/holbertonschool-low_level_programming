#include "main.h"
#include <stdio.h>

/**
 *puts_half - second half of string
 *@str: string
 *Return: always sucess
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int n;

	while (*(str + i) != 0)
	{
		for (j = 0; j < i % 2; j++)
		{
			j++;
		}

	_putchar(str[j]);
	}

	_putchar(n = (i - 1) / 2);
	_putchar('\0');
}

