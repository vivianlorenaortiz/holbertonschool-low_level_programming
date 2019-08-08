#include "holberton.h"
#include <unistd.h>

/**
 *mascara - Recursive function to selectively extract data
 *@m: name of the function.
 *Return: ntg
 */
void mascara(unsigned long int m)
{
	if (m == 0)

		return;
	mascara(m >> 1);
	_putchar((m & 1) + '0');
}
/**
 *print_binary - Function that prints the binary representation of a number.
 *@n: Integer to the function.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)

	_putchar('0');
	else
		mascara(n);
}
