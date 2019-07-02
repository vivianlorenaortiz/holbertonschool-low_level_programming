#include "holberton.h"
/**
 * print_rev - function that prints a strings in reverse
 *@s: Integer to computer
 *
 */

void print_rev(char *s)

{
	int i;
	int x;

	for (i = 0; i < 5000; i++)
	{
		if (s[i] == '\0')
			break;
		x++;
	}
	for (x = i - 1; x >= 0; x--)
	{	_putchar(s[x]);
	}
	_putchar('\n');
}
