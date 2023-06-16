#include <stdio.h>

/**
 * main - alphabet
 * Return: always (success)
 */

int main(void)
{
	char alphabet;
	char ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (ALPHABET = 'A'; alphabet <= 'Z'; ALPHABET++)                    
	{
		putchar(ALPHABET);
	}

	putchar('\n');
	return (0);
}
