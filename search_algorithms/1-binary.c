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
    int l = 0;
    int r = size - 1;
    int m = 0; 
     
    if(array == NULL || size == 0)
        return (-1);

    if (size == 0)
        return(-1);
    
    while (l <= r) 
    {
        if (array[m] == value)
            return (m); 
        else if (array[m] < value)
            return (l = m + 1);
        else
            return (r = m - 1);
    }
    
    return(-1);
}