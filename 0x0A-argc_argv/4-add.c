#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number
 *@argv: string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) || *argv[i] == '0')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("ERROR\n");
			return (1);
		}
	}

		printf("%d\n", sum);

		return (0);

}
