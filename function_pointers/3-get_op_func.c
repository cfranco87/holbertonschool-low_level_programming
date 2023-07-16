#include "3-calc.h"
#include <stdlib.h>

/**
 *get_op_func - getting function from op_func
 *@s: pointer to func
 *Return: operations
 */

int (*get_op_func(char *s))(int, int)
{

	int (*fun)(int, int);
	int i;

	if (*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
	{
		return (NULL);
	}

	while (i > 0)
	{
		i++;
	}

	return (fun);
}
