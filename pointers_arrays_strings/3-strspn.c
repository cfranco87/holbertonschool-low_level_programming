#include "main.h"
#include <stdio.h>

/**
 *_strspn -  length of a prefix substring
 *@s: string
 *@accept: pointer to the string
 *Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int i;

	while (*s)
	{

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				l++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (l);

		}
		s++;
	}

	return (l);
}
