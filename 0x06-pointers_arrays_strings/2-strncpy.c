#include "holberton.h"
/**
 *_strncpy - function that copies the string
 *@dest: Parameter to computer
 *@src: parameter
 *@n: Parameter to computer
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
