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

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(strlen(str) + 1);

	while (*str != '\0')
	{
		*s = *str;
		str = str + 1;
		s = s + 1;
	}

	*s = '\0';

	free(s);
	return (s);
	return (0);
}
