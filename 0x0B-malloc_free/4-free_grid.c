#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Frees a 2D memory space
 * @grid: 2D memory space
 * @height: Rows
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
