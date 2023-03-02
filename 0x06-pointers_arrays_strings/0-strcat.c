#include "main.h"
#include <stdlib.h>

/**
 * _strcat - Function that concats s1 to s2
 * @dest: New string
 * @src: String to be added
 *
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	char *src_copy, *dest_copy, *results;
	int src_len, dest_len, i;

	src_len = 0, dest_len = 0, i = 0;
	dest_copy = dest, src_copy = src;
	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}
	while (*src != '\0')
	{
		src_len++;
		src++;
	}
	results = malloc((dest_len + src_len) * sizeof(char));
	for (i = 0; i < dest_len; i++)
	{
		results[i] = dest_copy[i];
	}
	for (i = 0; i < src_len; i++)
	{
		results[dest_len + i] = src_copy[i];
		dest[i] = src_copy[i];
	}
	results[dest_len + src_len] = '\0';
	return (results);
}
