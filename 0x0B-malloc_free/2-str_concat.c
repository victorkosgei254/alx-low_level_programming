#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Function that concats 2 strings
 * @s1: string one
 * @s2: string two
 *
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int s1_count, s2_count, i, total_count;
	char *buffer, *s1_copy, *s2_copy;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	s1_count = 0, s2_count = 0, i = 0;
	s1_copy = s1, s2_copy = s2;
	while (*s1_copy != '\0')
	{
		s1_count++, s1_copy++;
	}
	while (*s2_copy != '\0')
	{
		s2_count++, s2_copy++;
	}
	total_count = s1_count + s2_count + 1;
	buffer = malloc(total_count * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	buffer[total_count] = '\0';
	for (i = 0; i <= s1_count; i++)
	{
		buffer[i] = s1[i];
	}
	for (i = 0; i <= s2_count; i++)
	{
		buffer[i + s1_count] = s2[i];
	}
	return (buffer);
}
