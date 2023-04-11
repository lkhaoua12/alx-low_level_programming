#include "main.h"
/**
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int (*p)[height] = (int **)malloc(height * width);

	for (i = 0; i < height - 1; i++)
	{
		for (j = 0; j < width - 1; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}
	return (p);
}
