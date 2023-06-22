#include "main.h"
#include <string.h>

/**
 *_strlen - string
 *@s: letter
 *Return: always success
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
	}
	return (c);
}
