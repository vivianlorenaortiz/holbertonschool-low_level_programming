#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alfa;
	int a = 0;

	while (a < 10)
	{
		for (alfa = 'a'; alfa <= 'z'; alfa++)
		{
			_putchar (alfa);
		}
		_putchar ('\n');
		a++;
	}
}
