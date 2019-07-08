#include "holberton.h"
/**
 * _strspn -  Function that gets the length of a prefix substring
 * @s: string
 *@accept: string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int m;
	unsigned int count = 0;

	for (i = 0; s[i]; i++)

	for (m = 0; accept[m]; m++)
	{
		if (s[count] == accept[m])
		{
			count++;
		}
	}
	return (count);
}
