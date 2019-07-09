#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: type char str
 * @needle: type char sub str
 * Return: haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *tod = haystack;
		char *rtr = needle;

		while (*rtr == *haystack && *rtr != '\0' && *haystack != '\0')
		{
			haystack++;
			rtr++;
		}
		if (*rtr == '\0')
			return (tod);
		haystack = tod + 1;
	}
	return (NULL);
}
