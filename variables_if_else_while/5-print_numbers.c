#include <stdio.h>

/**
 * main -numbers
 * Return: always (success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
		if (x < 9)
		{
			print(",");
		}
	}
	print("\n");

	return (0);
}	
