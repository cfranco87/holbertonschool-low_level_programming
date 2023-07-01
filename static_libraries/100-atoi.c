#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_atoi - to interger
 *@s:strings
 *Return: interger value from string
 */

int _atoi(char *s)
{
	int r = 0;
	int si = 1;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		si = si[i] == '-') ? si : si;
		i++;


		if (r > (INT_MAX / 10) || (r == INT_MAX / 10 && digit > INT_MAX % 10))	
		{	
			if (si == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		r = r * 10 + digit;
		i++;
	}

	return (r * si);
}
