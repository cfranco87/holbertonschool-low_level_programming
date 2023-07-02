#include "main.h"
#include <stdio.h>

/**
 *main - open
 *@argv: argument vector
 *@argc: argument counter
 *Return: always success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("arg[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
