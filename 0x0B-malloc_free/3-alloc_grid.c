#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate 2D array
 * @width: the width of the grid array
 * @height: the height of grid array
 *
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **buffer, i;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	buffer = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));
		buffer[i] = {0};
	}
	return (buffer);
}
