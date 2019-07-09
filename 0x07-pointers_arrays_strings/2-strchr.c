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
	unsigned int n;

	for (; ; n++)
	{
		if (s[n] == c)
			return (&(s[n]));
		if (!s[n])
			return (NULL);

	}
}
