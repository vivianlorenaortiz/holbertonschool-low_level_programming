#include "search_algos.h"
/**
 *binary_search - function that searches for a value in a sorted array.
 *@array: is a pointer to the first element of the aray to search.
 *@size: is the number of elements in array.
 *@value: return the index where value is located
 *Return: value
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printArray(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
/**
 *printArray - Function for print.
 *@array: is a pointer to the first element of the aray to search.
 *@start: variable of the function
 *@end: variable of the function.
 *Return: nt
 */

void printArray(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}

	printf("%d", array[i]);
	printf("\n");
}
