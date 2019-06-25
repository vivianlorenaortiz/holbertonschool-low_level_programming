#include "holberton.h"
/**
 * print_last_digit - Funtion that prints the last digital of a number.
 * @d: integer to computer
 *
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	d = d % 10;
	if (d < 0)
	{
		d = d * (-1);
	}
	_putchar('0' + d);
	return (d);
}
