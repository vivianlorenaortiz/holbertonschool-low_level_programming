#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *@s: Integer to computer
 *
 */

void rev_string(char *s)
{
	int m;
	int a = 0;
	int size = 0;
	int aux[500];

	for (m = 0; m < 500; m++)
	{
		if (s[m] == '\0')
			break;
		size++;
	}
	for (m = size - 1; m >= 0; m--)
	{
		aux[a] = s[m];
		a++;
	}
	for (m = 0; m < size; m++)
	{
		s[m] = aux[m];
	}
}
