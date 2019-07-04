#include "holberton.h"
/**
 *_strcat - function that copies the string pointed to by src
 *@dest: Parameter to computer
 *@src: parameter
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int n;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (n = 0; src[n] != '\0'; n++, j++)
		dest[j] = src[n];

	dest[j] = '\0';

	return (dest);
}
