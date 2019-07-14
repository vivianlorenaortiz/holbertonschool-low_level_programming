#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *@argc: number
 *@argv: string
 * Return: Always or 1
 */
int main(int argc, char *argv[])
{
	int i, s, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (s = 0; argv[i][s]; s++)
		{
			if (isdigit(argv[i][s]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
