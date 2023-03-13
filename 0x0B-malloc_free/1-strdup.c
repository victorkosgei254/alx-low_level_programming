#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates string
 * @str: string to be duplicated
 *
 * Return: string
 */

char *_strdup(char *str)
{
	char *copy, *buffer;
	int size, i;

	size = 0; i = 0;
	copy = str;
	while (*copy != '\0')
	{
		size++;
		copy++;
	}
	buffer = malloc(size * sizeof(char));
	if (buffer == -1)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buffer[i] = str[i];
	}
	buffer[size] = '\0';
	return (buffer);
}
