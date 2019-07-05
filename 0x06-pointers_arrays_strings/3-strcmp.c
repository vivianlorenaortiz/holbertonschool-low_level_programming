#include "holberton.h"
/**
 *_strcmp - function that compares two strings
 *@s1: Pointer parameters
 *@s2: Pointer parameters
 *Return: rest
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0;
	int rest;


	while (s1[k] != '\0')
	{
		rest = s2[k] - s1[k];
		if (rest != 0)
		{
			break;
		}
		k++;
	}
		return (rest);
}
