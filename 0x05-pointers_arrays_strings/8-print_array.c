#include <stdio.h>
#include "holberton.h"
/**
 * print_array - function that prints n elements of an array of integers
 *@a: Integer to computer
 *@n: Integer to computer
 */

void print_array(int *a, int n)

{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k < n - 1)
		{

		printf("%d, ", a[k]);
	}
	else
	{
		printf("%d", a[k]);
	}
}

printf("\n");
}
