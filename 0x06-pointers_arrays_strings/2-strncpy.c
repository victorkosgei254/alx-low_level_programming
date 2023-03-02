#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - Function that concats s1 to s2
 * @dest: New string
 * @src: String to be added
 * @n: length of src to be concat
 *
 * Return: String
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *src_copy, *dest_copy, *results;
	int src_len, dest_len, i;

	src_len = 0, dest_len = 0, i = 0;
	dest_copy = dest, src_copy = src;
	while (*dest_copy != '\0')
	{
		dest_len++;
		dest_copy++;
	}
	while (*src_copy != '\0')
	{
		src_len++;
		src_copy++;
	}
	results = malloc(dest_len * sizeof(char));
	for (i = 0; i < n; i++)
	{
		if (i < src_len)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}

	for (i = 0; i < dest_len; i++)
	{
		results[i] = dest[i];
	}
	results[dest_len] = '\0';
	return (results);
}
