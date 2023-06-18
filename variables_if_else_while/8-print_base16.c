#include <stdio.h>

/**
 * main- base
 * Return: always (success)
 */

int main(void)
{
	int x;
	char l;

	{
		for (x = 0; x < 10; x++)
		{
			putchar((x % 10) + '0');
		}
		for (l = 'a'; l <= 'f'; l++)
		{
			putchar(l);
		}
	}

		putchar('\n');
		return (0);
}
