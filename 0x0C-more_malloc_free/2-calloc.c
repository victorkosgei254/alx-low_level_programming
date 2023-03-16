#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocated memory of an array
 * @nmemb: size of members
 * @size: size in bytes
 *
 * Return: Pointer to allocated block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int i;

	if ((nmemb <= 0) || (size <= 0))
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	return (memory);
}
