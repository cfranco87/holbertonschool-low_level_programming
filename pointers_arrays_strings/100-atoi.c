#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_atoi - to interger
 *s: strings
 *Return: 0
 */

int _atoi(char *s)
{
	int r = 0;
	int n = 1;
	int i = 0;

	if (s[0] == '-')
	{
		n = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
		r = r * 10 + s[i] - '0';

	return (i * n);
}
