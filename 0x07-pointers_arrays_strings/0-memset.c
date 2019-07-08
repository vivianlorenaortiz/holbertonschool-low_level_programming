#include "holberton.h"
/**
 *_memset - Sets the first num bytes of the block of memory pointed
 *@s: Pointer
 *@n: Variable to cumputer
 *@b: Constant byte
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;


	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
