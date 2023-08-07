#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows
 *@height: column
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int k;
	int *p;

	for (k = 0; k < height; k++)
	{
		p = grid[k];
		free(p);
	}
	free(grid);
}
