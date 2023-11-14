#include "doctware.h"

/**
 * man - check the code
 * @grid: the address of the two demensional grid
 * @width: width of the grid
 * @height: Height of he grid
 *
 * Return: Nothing
 */

void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int **grid;
	
	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
        grid[3][4] = 402;
        print_grid(grid, 6, 4);
	return (0);
}
