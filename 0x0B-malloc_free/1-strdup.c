#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0, i = 0;
	copy = str;
	while (*copy != '\0')
	{
		size++;
		copy++;
	}
	buffer = malloc((size + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buffer[i] = str[i];
	}
	buffer[size + 1] = '\0';
	return (buffer);
}
