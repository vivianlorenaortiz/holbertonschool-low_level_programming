#include "holberton.h"
/**
 * flip_bits - Function that returns teh number of bits you would need.
 *@n: Integer.
 *@m: Integr.
 *Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask;
	unsigned int count = 0;

	mask =	n ^ m;

	while (mask != 0)
	{
		if (mask & 1)
			count++;
		mask = mask >> 1;
	}
	return (count);
}
