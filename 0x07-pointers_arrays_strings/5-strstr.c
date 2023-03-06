#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of substring
 * @haystack: Parent string
 * @needle: check occurance
 *
 * Return: Pointer to first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	char *h_copy, *n_copy;
	int index, tmp;

	h_copy = haystack, n_copy = needle;
	index = 0, tmp = 0;
	while (*h_copy != '\0')
	{
		if (*h_copy == *n_copy)
		{
			index = tmp;
			while (*n_copy != '\0')
			{
				if (*n_copy != *h_copy)
				{
					index = 0;
					break;
				}
				h_copy++, n_copy++;
			}
		}
		tmp++;
		h_copy++;
	}
	if (index == 0)
	{
		return (NULL);
	}
	return (haystack + index);
}
