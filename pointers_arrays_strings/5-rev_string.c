#include "main.h"
#include <stdio.h>

/**
 * rev_string- reversing string
 * @s: string
 * Return: yea
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char o;
	int x;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (x = 0; x < i / 2; x++)
	{
		o = s[x];
		s[x] = s[j];
		s[j] = o;
		j--;
	}
}



