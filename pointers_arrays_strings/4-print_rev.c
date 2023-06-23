#include "main.h"
#include <stdio.h>

/**
 *print_rev - putting things in
 *@s: sssss
 *Return: sucess
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* calculates length of string*/
	{
		i++;
	}

	for (i =  i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}


