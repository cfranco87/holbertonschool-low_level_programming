#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - string and int concat
 *@s1: string 1
 *@s2: string 2
 *@n: unsigned int
 *Return: always success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int k = n, i = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	for (i = 0; s1[i]; i++)
	{
		k++;
	}

	string = malloc(sizeof(char) * (k + 1));
	if (string == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; s1[i]; i++)
	{
		string[k++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		string[k++] = s2[i];
	}
	string[k] = '\0';

	return (string);
}
