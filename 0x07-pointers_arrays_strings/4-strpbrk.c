#include "holberton.h"
/**
 * _strpbrk -  Function that gets the length of a prefix substring
 * @s: string
 *@accept: string
 * Return: s and accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int m;

	for (i = 0; s[i]; i++)

	for (m = 0; accept[m]; m++)
	{
		if (s[i] == accept[m])
		{
			return (s + i);
		}
	}
	return ('\0');
}
