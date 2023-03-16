#include "main.h"

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
		return (98);
	}
	return (memory);
}
