#include "holberton.h"
/**
 *clear_bit - Function that sets the value of a bit to 0 at a given index.
 *@n: Integer to computer.
 *@index: Is the index, starting from 0 of the bit you want to set.
 *Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 64)
		return (-1);
	*n = *n & ~mask;
	return (1);
}
