#include "holberton.h"
/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: Parameter to computer
 *@src: parameter
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
