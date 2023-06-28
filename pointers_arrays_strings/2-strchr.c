#include "main.h"
#include <stdio.h>

/**
 *_strchr - string character
 *@s: string
 *@c: charcater
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); // Character found, return pointer to its location
		}
		s++; // Move to the next character in the string
	}

	return (NULL); // Character not found, return NULL pointer
}
