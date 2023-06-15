#include <stdio.h>

/**
 * main - functions
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of an long int: %zu bytes\n", sizeof(longintType));
	printf("Size of an long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	Return(0);
}
