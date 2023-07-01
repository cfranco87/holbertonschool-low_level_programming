#include "main.h"
#include <stdio.h>


/**
 *_strncat - concatenate two strings
 *@dest: destination
 *@src: source
 *@n: limit of byte
 *Return: always success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0';)
	{
		dest[i] = src[j];
			i++;
			j++;
	}
	dest[i] = '\0';

	return (dest);
}
