#include "holberton.h"
/**
 *more _numbers - Prints 10 times the numbers, form 0 to 14
 *
 */

void more_numbers(void)
{
	int i,j;

	for (j = 0; j < 10; j++)
	{
			for (i = 0; i < 15; i++)
			{
				if (i <= 9)
					_putchar((i) + '0');
				else
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
			}
			_putchar ('\n');
	}
}
