#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid- frees memory form grid
 * @grid: the grid to be freed
 * @height: the size to free
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
