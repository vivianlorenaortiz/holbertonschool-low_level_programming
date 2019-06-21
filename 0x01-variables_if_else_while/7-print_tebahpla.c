#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar (a);
		a = a - 1;

	}
	putchar ('\n');

	return (0);
}
