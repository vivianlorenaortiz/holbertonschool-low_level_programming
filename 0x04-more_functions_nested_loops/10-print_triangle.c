#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: is an integer
 *
 */

void print_triangle(int size)

{
	int n, i;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size; i++)
			if (i < size - (n + 1))
				_putchar(' ');
			else
				_putchar('#');
			_putchar('\n');
		}
	}
}
