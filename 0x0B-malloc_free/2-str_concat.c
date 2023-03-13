#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
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

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	s1_count = 0, s2_count = 0, i = 0;
	s1_copy = s1, s2_copy = s2;
	if (s1 != NULL)
	{
		while (*s1_copy != '\0')
		{
			s1_count++, s1_copy++;
		}
	}
	else if (s2 != NULL)
	{
		while (*s2_copy != '\0')
		{
			s2_count++, s2_copy++;
		}
	}
	total_count = s1_count + s2_count + 1;
	buffer = malloc(total_count * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	buffer[total_count] = '\0';
	if (s1 != NULL)
	{
		for (i = 0; i <= s1_count; i++)
		{
			buffer[i] = s1[i];
		}
	}
	else if (s2 != NULL)
	{
		for (i = 0; i <= s2_count; i++)
		{
			buffer[i + s1_count] = s2[i];
		}
	}
	return (buffer);
}
