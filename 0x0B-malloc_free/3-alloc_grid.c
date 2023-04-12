#include "main.h"
/**
 * alloc_grid - allcoate a 2d array
 * @width: the number of colums
 * @height: number of rows
 * Return: pointer to pointer
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		*(p + i) = (int *)malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}
	return (p);
}
