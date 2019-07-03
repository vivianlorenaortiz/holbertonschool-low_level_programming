#include "holberton.h"
/**
 * puts_half - function that prints half of a string
 *@str: Integer to computer
 *
 */

void puts_half(char *str)

{
	int count;
	int mitad;
	int otro;

	for (count = 0; str[count] != '\0'; count++)
	{
		mitad++;
	}
	if (mitad % 2 == 0)
		otro = mitad / 2;
	else
		otro = (mitad + 1) / 2;
	for (count = otro; count < mitad; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
