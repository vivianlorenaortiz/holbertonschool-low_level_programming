#include "holberton.h"
/**
 * reverse_array - rev. the order of an array
 * @a : pointer-parameter
 * @n : parameter
 */
void reverse_array(int *a, int n)
{
	int m = 0;
	int j = n - 1;
	int tmp;

	while (m < j)
	{
		tmp = a[m];
		a[m] = a[j];
		a[j] = tmp;
		m++;
		j--;
	}
}
