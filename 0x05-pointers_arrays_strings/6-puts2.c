#include "holberton.h"
/**
 * puts2 - function that prints one char out of 2 of a string
 *@str: Integer to computer
 *
 */

void puts2(char *str)

{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
