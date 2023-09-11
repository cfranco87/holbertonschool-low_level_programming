#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 *binary_search - function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@value: value within array
 *@size: size of the array
 *@array: array in which will will search
*/

int binary_search(int *array, size_t size, int value)
{
    long unsigned int i = 0;

    if(!value && array == NULL)
        return (-1);

    if (size == 0)
        return(-1);

    



}