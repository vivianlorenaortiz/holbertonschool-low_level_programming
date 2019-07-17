#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously.
 * @grid: imput of the matrix.
 * @height: height of the matrix.
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = (height - 1); k >= 0; k--)

	{
		free(grid[k]);
	}
	free(grid);
}
