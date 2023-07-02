#include "main.h"
#include <stdio.h>

/**
 *main - open
 *@argv: argument vector
 *@argc: argument counter
 *Return: always success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
