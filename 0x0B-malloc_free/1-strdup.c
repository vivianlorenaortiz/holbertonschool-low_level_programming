#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_strdup - function returns a pointer to a new string which is a duplicate.
 *@str: char
 *Return: String
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
