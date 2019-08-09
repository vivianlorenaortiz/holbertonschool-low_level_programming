#include "holberton.h"
#include <stdio.h>

/**
 *get_bit - Function thar returns the value of a bit at a given index.
 *@n: long of the computer.
 *@index: Integer to computer
 *Return: The value of the bit at index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
