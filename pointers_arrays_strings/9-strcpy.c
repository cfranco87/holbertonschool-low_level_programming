#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcpy- copy string
 *@dest: destination
 *@src: source
 *Return: always success
 */

char *_strcpy(char *dest, char *src)
{
	char d = *dest;

	while (*src != '\0')
	{
		*dest = *src;
			dest++;
			src++;
	}

	*dest = '\0';

	return (d);
}
