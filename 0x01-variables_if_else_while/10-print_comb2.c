#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		for (n = 0; n <= 9; n++)
			putchar(n);
	}
	putchar ('\n');
	return (0);
}
