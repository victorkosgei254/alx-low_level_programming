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
	char *memory;
	int i;

	if ((nmemb <= 0) || (size <= 0))
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		memory[i] = 0;
	}
	return (memory);
}
