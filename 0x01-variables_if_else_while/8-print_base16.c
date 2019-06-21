#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char i = '0';

	while (a <= 'f')
	{
		putchar (a);
		a = a + 1;
	}
		while (i <= '9')
		{
			putchar (i);
			i++;
	}
	putchar ('\n');

	return (0);
}
