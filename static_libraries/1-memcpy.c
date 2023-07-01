#include "main.h"
#include <stdio.h>

/**
 *_memcpy - memory copy
 *@dest: destination
 *@src: source
 *@n: anything
 *Return: always success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = (unsigned char *)dest;
	const unsigned char *source = (const unsigned char *)src;

	for (i = 0; i < n; i++)
	{
		destination[i] = source[i];
	}

	return (dest);
}

