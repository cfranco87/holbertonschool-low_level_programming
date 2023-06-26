#include "main.h"
#include <stdio.h>


/**
 *_strncpy - copy strings
 *@dest: destination
 *@src: source
 *@n: limit of byte
 *Return: always success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0';)
	{
		dest[i] = src[i];

	}

	for (; i < n; i++)

	dest[i] = '\0';
	{
		return (dest);
	}
}
