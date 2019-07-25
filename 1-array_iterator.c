#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_elem - prints an integer
 *
 *
 *
 *
 *
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
