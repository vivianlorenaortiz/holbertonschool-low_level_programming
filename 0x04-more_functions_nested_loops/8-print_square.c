#include "holberton.h"
/**
 *print_square - that prints a square, followed by a new line
 *@size: Integer to computer
 */

void print_square(int size)
{
	int n;
	int i;

	if (size <= 0)
	{

		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
