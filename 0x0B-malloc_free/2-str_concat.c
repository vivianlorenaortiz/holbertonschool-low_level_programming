#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
* _strlen - returns the length of a string.
* @s: string
* Return: str
*/
int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		return (len + _strlen(s + 1));
	}
	return (len);
}
/**
* *str_concat - Concat funtion
*@s1: Is a pointer
*@s2: Is a pointer
*Return: String
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;


	}
	s[i] = '\0';
	return (s);
}
