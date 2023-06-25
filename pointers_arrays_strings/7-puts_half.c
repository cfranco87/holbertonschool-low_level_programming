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
	int j = 0;
	int x;

	while (str[i] != '\0')
	{
		i++;
		j++;

	}

	if (j % 2 == 0)
	{
		x = j / 2;
	}
	else
	{
		x = (j + 1) / 2;
	}

	for (int k = x; k < i; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}

