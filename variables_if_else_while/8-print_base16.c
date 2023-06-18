#include <stdio.h>
#include <ctype.h>

/**
 * main- base
 * Return: always (success)
 */

int main(void)
{
	int x;

	{
		for (x = 0; x <= 16; x++)
		{
			putchar(x + '0');
			putchar (tolower(x));
		}
	}

		putchar('\n');
		return (0);
}
