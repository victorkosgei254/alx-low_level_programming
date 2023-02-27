#include "main.h"

/**
 * _strlen - Function returns length of string
 * @s: string to compute length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
