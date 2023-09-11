#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 *linear_search - function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: array in which we will search
 *@size: size of the array
 *@value: value within the array
 *Return: value found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int flag = 0;

	if (!value && array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		flag = 1;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (*(array + i) == value)
		{
			return (i);
		}
		if (flag == 0)
		break;
	}

	return (-1);
}
