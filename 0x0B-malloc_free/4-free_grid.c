#include "main.h"

/**
 * free_grid - free memory aloccated to 2d array
 * @grid: pointer to pointer.
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
}
