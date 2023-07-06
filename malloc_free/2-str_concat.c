#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - add two string with malloc
 *@s1: string 1
 *@s2: string 2
 *Return: always success
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int a, b = 0;
	int c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (c = 0; s1[c] != '\0'; c++)
	{
		a++;
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
		b++;
	}

	string = malloc(sizeof(char) * b + a + 1);
		if (!string)
		{
			return (NULL);
		}

	for (c = 0; c != a; c++)
	{
		string[c] = s1[c];
	}
	for (c = 0; c != b; c++)
	{
		string[a] = s2[c];
	}
	return (string);
}
