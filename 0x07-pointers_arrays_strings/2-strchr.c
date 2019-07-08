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
	unsigned int i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (&s[i]);
	}
	}
	return (NULL);
}
