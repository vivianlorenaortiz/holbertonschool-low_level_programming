#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_


#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printArray(int *array, size_t start, size_t end);
#endif
