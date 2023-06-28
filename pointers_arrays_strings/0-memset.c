#include "main.h"
#include <stdio.h>

/**
 *_memset - memory set
 *@s: string
 *@b: byte
 *@n: anything
 *Return: Always success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = (unsigned char *)s;
	unsigned char value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (s);
}
