#include "main.h"
#include <stdlib.h>

/**
 * _strncat - Function that concats s1 to s2
 * @dest: New string
 * @src: String to be added
 * @n: length of src to be concat
 *
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
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
	if (n > src_len)
	{
		n = src_len;
	}
	results = malloc((dest_len + src_len) * sizeof(char));
	for (i = 0; i < dest_len; i++)
	{
		results[i] = dest_copy[i];
	}
	for (i = 0; i < n; i++)
	{
		results[dest_len + i] = src_copy[i];
		dest[i] = src_copy[i];
	}
	results[dest_len + src_len] = '\0';
	return (results);
}
