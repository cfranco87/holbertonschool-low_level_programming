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
	char* od = dest;
	char* t = dest;
	

	while (*src != '\0')
	{
		*t = *src;
			t++;
			src++;
	}

	*t = '\0';

	return (od);
}
