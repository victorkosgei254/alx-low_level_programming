#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcpy - function that copies from source to dest
 * @dest: Destination address
 * @src: Source address
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int length, i;

	char *copy = src;

	length = 0;
	while (*src != '\0')
	{
		length++;
		src++;
	}
	char *results = malloc(length + 1);

	for (i = 0; i <= length; i++)
	{
		dest[i] = copy[i];
		results[i] = copy[i];
	}
	return (results);
}
