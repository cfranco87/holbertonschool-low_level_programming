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

	while (dest[i++])
		j++;


	for (i = 0; src[i]; i++)
		dest[j] = src[i];

	return (dest);
}
