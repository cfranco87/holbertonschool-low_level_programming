#include <stdio.h>
#include <stdlib.h>

/**
 *linear_search - function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@value: value within array
 *@size: size of the array
 *@array: array in which will will search
*/

/*function for linear search*/

int linear_search(int *array, size_t size, int value)
{
    long unsigned int i = 0;

    if(!value && array == NULL)
        return (-1);

    if (size == 0)
        return(1);

    for( ; i <= size; i++)
        {
            if(*(array + i) == value)
            return (0);
        }

    return (-1);
}