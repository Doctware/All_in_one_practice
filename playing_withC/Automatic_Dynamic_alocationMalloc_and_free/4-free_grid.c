#include "doctware.h"

/**
 * free_grid - free a 2 dementional array
 * @grid: array of pointer
 * @height: rows to be freed
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
