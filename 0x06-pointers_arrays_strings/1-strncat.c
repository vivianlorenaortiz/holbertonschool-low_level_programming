#include "holberton.h"
/**
 *_strncat - function that copies the string pointed to by src
 *@dest: Parameter to computer
 *@src: parameter
 *@n: Parameter to computer
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;
	int k;
	int x = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (m = 0 ; src[m] != '\0'; m++)
		;

	if (n >= m)
		;
	else
		m = n;

	for (k = i; k < i + m; k++)
	{
		dest[k] = src[x];
		x++;
	}
	return (dest);
}
