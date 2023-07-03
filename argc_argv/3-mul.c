#include "main.h"
#include <stdio.h>

/**
 *mul - open
 *@argv: argument vector
 *@argc: argument counter
 *Return: always success
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
