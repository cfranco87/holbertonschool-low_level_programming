#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 *binary_search - function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@value: value within array
 *@size: size of the array
 *@array: array in which will will search
 *Return: value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right;
	size_t i;


	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		right = i - 1;
	else
		left = i + 1;
	}

	return (-1);
}
