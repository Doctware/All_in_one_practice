#include "doctware.h"

/**
 * prit_chessboard - print the chess board
 * @a: poiner to an array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		if (i < 7)
		{
			putchar('\n');
		}
	}
	putchar('\n');
}
