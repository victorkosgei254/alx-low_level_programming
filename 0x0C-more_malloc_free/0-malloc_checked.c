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
	int status;

	status = 98;
	memory = malloc(b);
	if (memory == NULL)
	{
		memory = &status;
		return (memory);
	}
	return (memory);
}
