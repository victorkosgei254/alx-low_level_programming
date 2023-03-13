#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array
 * @size: size of the array
 * @c: character to fill the array
 *
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}
	buffer = malloc(size * sizeof(char));
	buffer[size] = '\0';
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
