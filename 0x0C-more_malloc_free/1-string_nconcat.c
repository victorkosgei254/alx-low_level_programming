#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Function that concates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: nmber of char to be concated
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_copy, *s2_copy, *result;
	unsigned int s1_len, s2_len, i;

	s1_copy = s1, s2_copy = s2, s1_len = 0, s2_len = 0, i = 0;
	if (s1 == NULL)
	{
		s1_copy = malloc(sizeof(char));
	}
	if (s2 == NULL)
	{
		s2_copy = malloc(sizeof(char));
	}
	while (*s1_copy != '\0')
	{
		s1_len++, s1_copy++;
	}
	while (*s2_copy != '\0')
	{
		s2_len++, s2_copy++;
	}
	if (n > s2_len)
	{
		n = s2_len;
	}
	result = malloc((s1_len + n) * sizeof(char));
	result[s1_len + n] = '\0';
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[i + s1_len] = s2[i];
	}
	return (result);
}
