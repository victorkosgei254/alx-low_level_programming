#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Function allocated memmory using malloc
 * @b: size of mememory block
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
	{
		exit(3);
	}
	return (memory);
}
