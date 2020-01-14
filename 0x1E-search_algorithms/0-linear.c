#include "search_algos.h"
/**
 *linear_search - function that searches for a value in an array of integers.
 *@array: is a pointer to the first elementof the array.
 *@size: is the number of elements in array.
 *@value: is the value to search for function.
 *Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
