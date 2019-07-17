#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the matrix.
 * @height: height of the matrix.
 * Return: array of integrers.
 */
int **alloc_grid(int width, int height)
{

	int **jay;
	int a;
	int b;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	jay = malloc(height * sizeof(int *));

	if (jay == NULL)
	{
		return (NULL);
	}

	for (; a < height; a++)
	{
		jay[a] = malloc(width * sizeof(int));
		if (jay[a] == NULL)
		{
			for (k = a - 1; k >= 0; k--)
				free(jay[k]);
			free(jay);
			return (NULL);
		}
	}

		for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)

			jay[a][b] = 0;
	}
		return (jay);
}
