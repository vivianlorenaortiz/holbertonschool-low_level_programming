#include "holberton.h"
/**
 *print_line - Function thar draws a straigth line in the terminal
 *
 *@n: Integer to computer
 *
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
