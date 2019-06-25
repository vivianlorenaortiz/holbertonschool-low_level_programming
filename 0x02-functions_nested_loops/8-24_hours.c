#include "holberton.h"
/**
*jack_bauer - Print every minute of the day of Jack Bauer.
*
*Return: Always 0.
*/
void jack_bauer(void)
{
	int m, x, j, z;
	int i = '9';

	for  (m = '0'; m <= '2'; m++)
	{
		if (m == '2')
		{
			i = '3';
		}

		for (x = '0'; x <= i; x++)
		{
			for (j = '0'; j <= '5'; j++)
			{
				for (z = '0'; z <= '9'; z++)

				{
					_putchar (m);
					_putchar (x);
					_putchar (':');
					_putchar (j);
					_putchar (z);
					_putchar ('\n');
				}
			}
		}
	}
}
