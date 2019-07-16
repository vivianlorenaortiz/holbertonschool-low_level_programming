#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array - specific char
 *@size:Is a integer.
 *@c:Is a character
 *Return: String
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
