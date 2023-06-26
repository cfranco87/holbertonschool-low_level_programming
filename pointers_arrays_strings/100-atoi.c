#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_atoi - to interger
 *@s:strings
 *Return: interger value from string
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 1;

	do {
		if (*s == '-')
			n *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * i);
}
