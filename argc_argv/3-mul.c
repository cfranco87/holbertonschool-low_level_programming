#include "main.h"
#include <stdio.h>

/**
 *mul - open
 *@argv: argument vector
 *@argc: argument counter
 *Return: always success
 */

int mul(int argc, char **argv)
{
	int i, sum = 1;

	printf("argc = %d\n", argc);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i,  argv[i]);
			sum *= _atoi(argv[i]);
		}
		 printf("%d\n", sum);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

	return (0);
}
