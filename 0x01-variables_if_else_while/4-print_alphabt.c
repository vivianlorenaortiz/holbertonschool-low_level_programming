#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a ;
	a = 'a';

	while (a <= 'z')
	{
	putchar (a);
	(a++);
		if (a == 'q' || a == 'e')
			(a++);
	}
	{
	putchar ('\n');
	}
	return (0);
}
