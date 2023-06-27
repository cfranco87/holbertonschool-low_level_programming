#include "main.h"
#include <stdio.h>


/**
 *_strncpy - copy strings
 *@dest: destination
 *@src: source
 *@n: number
 *Return: always success
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *od = dest;
	char *d = dest;

	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*d = '\0';
		d++;
		n--;
	}

	return (od);

}
