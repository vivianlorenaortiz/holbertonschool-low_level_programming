#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *main - Entry pointer
 *@argc: number of argument
 *@argv: String whit argument
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int a;
	int b = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (b != '+' && b != '-' && b != '*' && b != '/' && b != '%')
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	a = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (get_op_func(argv[2]))(i, a));

	return (0);
}
