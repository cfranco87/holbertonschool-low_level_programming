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
	int k, i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	if (n > j)
	{
		return (strcpy(malloc(sizeof(char) * (j + 1)), s2));
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		i++;
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		j++;
	}

	string = malloc(sizeof(char) * (i + j + 1));
	if (!string)
	{
		return (NULL);
	}

	for (k = 0; k != i; k++)
	{
		string[k] = s1[k];
	}
	for (k = 0; k != j; k++)
	{
		string[i + k] = s2[k];
	}
	return (string);
}
