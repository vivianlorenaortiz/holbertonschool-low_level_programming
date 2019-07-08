#include "holberton.h"
/**
 *_memcpy - function that copies memory area
 *@src: Source
 *@n: bytes of the mem
 *@dest: destine
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;


	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
