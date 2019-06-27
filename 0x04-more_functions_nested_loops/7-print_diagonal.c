#include "holberton.h"
/**
 *print_diagonal - Function thst draws a diagonal line on the terminal
 *@n: Integer to computer
 *
 */

void print_diagonal(int n)
{
	int m, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (j = 0; j < m; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
