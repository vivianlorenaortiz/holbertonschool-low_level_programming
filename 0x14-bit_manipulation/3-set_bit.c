#include "holberton.h"

/**
 *set_bit - Function that sets the value of a bit to 1 a give index.
 *@n: long to computer.
 *@index: Is the index, starting from 0 of the bit you want to set.
 *Return: 1 if worked, or -1 if an error occurren.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask = mask << index;
	*n = *n + mask;
	return (1);
}
