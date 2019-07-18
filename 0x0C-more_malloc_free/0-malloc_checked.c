#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked -  Function that allocates memory using malloc.
 *@b: size of malloc
 *Return: Void (allocate)
 */

void *malloc_checked(unsigned int b)
{
	void *allocate;

	allocate = malloc(b);
	if (allocate == NULL)
		exit(98);

	return (allocate);
}
