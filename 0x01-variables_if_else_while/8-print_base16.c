#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';
	char a = 'a';

	while (i <= '9')
	{
		putchar (i);
		i++;
	}
		while (a <= 'f')
		{
			putchar (a);
			 a = a + 1;
	}
	putchar ('\n');

	return (0);
}
