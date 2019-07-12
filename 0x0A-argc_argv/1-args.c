#include <stdio.h>
/**
 *main - Entry pointer
 *@argc: number of argument
 *@argv: String with arguments
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
