// operations for addition, subtraction, division, module and multiplication//
#include "3-calc.h"

/**
 *op_add - addition
 *@a: variable
 *@b:variable
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: variable
 * @b: variable
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: variable
 * @b: variable
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: variable
 * @b: variable
 * Return: division of a and b
 */

int op_div(int a, int b)
if ( a == 0 || b == 0)
{
	_putchar("Error\n");
	exit(100);
}
else
{
	printf( a / b);

/**
 *op_mod - modules
 *@a: variable
 *@b: variable
 *Return: remainder of modules
 */

int op_mod(int a, int b)
{
	return (a % b);
}
