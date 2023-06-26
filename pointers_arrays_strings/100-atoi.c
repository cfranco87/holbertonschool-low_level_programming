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
	int si = 0;
	int num = 1;

	do {
		if (*s == '-')
			si *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * si);
}
