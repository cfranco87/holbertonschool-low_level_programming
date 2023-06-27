#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *string_toupper - UPPER
 *@str: string
 *Return: always success
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
