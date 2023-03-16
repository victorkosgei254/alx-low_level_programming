#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of intergers
 * @min: minimum integer of an array
 * @max: maximum integer in array
 *
 * Return: Pointer to created array
 */

int *array_range(int min, int max)
{
	int *memory, i;

	if (min > max)
	{
		return (NULL);
	}
	memory = malloc(((max - min) + 1) * sizeof(int));
	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		memory[i - min] = i;
	}
	return (memory);
}
