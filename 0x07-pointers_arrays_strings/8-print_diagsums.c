#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: size
 * Return: ntg
 */
void print_diagsums(int *a, int size)
{
	int j, diap = 0, digs = 0;

	for (j = 0; j < (size * size); j += (size + 1))
	{
		diap += a[j];
	}
	for (j = size - 1; j <= (size * size) - (size - 1); j += (size - 1))
	{
		digs += a[j];
	}
	printf("%d, %d\n", diap, digs);
}
