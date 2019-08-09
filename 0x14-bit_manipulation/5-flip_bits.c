#include "holberton.h"
/**
 * flip_bits - Function that returns teh number of bits you would need.
 *@n: Integer.
 *@m: Integr.
 *Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask = 1;
	unsigned int count = 0;

	n ^= m;

	while (n)
	{
		if (n & mask)
			count++;
		n >>= 1;
	}
	return (count);
}
