#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/*libraries used*/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/*algorithmic functions*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif