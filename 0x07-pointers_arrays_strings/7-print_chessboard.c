#include "holberton.h"
#include <stdio.h>

/**
 *print_chessboard - prints the chessboard
 *@a: pointer
 *
 *Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int f;

	for (i = 0; i < 8; i++)
	{
		for (f = 0; f < 8; f++)
		{
			putchar(a[i][f]);
		}
		putchar('\n');
	}
}
