#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: arguments counter.
 * @av: arguments vectors.
 * Return: Pointer to a new string, NULL if ac = 0 or av = 0 or fails malloc.
 */
char *argstostr(int ac, char **av)
{
int s, j, k = 0, n = 0;
	char *a;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		for (j = 0; av[s][j]; j++)
			n++;
		n++;
	}
	n++;
	a = malloc(n * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
		for (j = 0; av[s][j]; j++)
		{
			a[k] = av[s][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';
	return (a);
}
