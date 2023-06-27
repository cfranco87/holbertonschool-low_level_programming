#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strcat - concatenate two strings
 *@dest: destination
 *@src: source
 *Return: always success
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[i] != '\0')
	{
		dest[i] = src[j];
			i++;
			j++;
	}
	dest[i] = '\0';

	return (dest);
}