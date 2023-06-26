#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_atoi - to interger
 *s:strings
 *Return: interger value from string
 */

int _atoi(char *s)
{
	int r = 0;
	int n = 1;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			n = -n;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}

	return (r * n);
}
