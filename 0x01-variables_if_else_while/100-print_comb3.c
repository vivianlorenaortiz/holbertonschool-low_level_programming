#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num0;
	int num1;

	for (num0 = 48; num0 <= 57; num0++)
	{
		for (num1 = num1 + 1; num1 <= 57; num1++)
		{
			putchar(num0);
			putchar(num1);
			if (num0 != 56 || num1 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
		putchar ('\n');
		return (0);
}
