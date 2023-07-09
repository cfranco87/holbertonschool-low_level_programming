#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - copy string and memory
 *@str: string
 *Return: always success
 */

char *_strdup(char *str)
{
	char *s;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		j++;
	}

	s = malloc(sizeof(char) * (j + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}

	s[j] = '\0';

	return (s);
}

