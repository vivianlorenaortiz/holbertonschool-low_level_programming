#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - function that executes a function given as a parameter.
 *@array: for execute the func
 *@size: size of array
 *@action: pointer a func.
 *Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
		for (s = 0; s < size; s++)

		{
			action(array[s]);
		}
	}
}
