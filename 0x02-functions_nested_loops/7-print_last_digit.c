#include "holberton.h"
/**
 * print_last_digit - Funtion that prints the last digital of a number.
 * @d: integer to computer
 * Return: Always 0.
 */
int print_last_digit(int d)

{
	int m;
	char x;

	if (d >= '0')
	{
		m = (d % 10);
		x = m + '0';
		_putchar (x);
	}
	else
	{
		m = (d % 10) * (-1);
		x = m + '0';
		_putchar (x);
	}
	return (m);
}
