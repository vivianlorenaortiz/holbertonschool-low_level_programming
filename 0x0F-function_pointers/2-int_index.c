#include "function_pointers.h"
/**
 *int_index - function that searches for an integer.
 *@array: array of the func.
 *@size: size of the func.
 *@cmp: is a pointer to the function to be used to compare values.
 *Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0|| array != NULL || cmp != NULL)

		for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
