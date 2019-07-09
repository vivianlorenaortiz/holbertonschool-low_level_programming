#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr -  charater in a string
 * @s: pointer
 *@c: Char to find
 * Return: s
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*s != c)
	{
		++s;
		++i;
		return (s + i);
	}
	return ('\0');
}
