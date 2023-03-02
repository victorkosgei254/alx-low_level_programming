#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * resolver - Encodes a given character
 * @x: char to be encoded
 *
 * Return: Encoded char
 */

char resolver(char x)
{
	char charset[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char codes[5] = {'4', '3', '0', '7', '1'};
	int i;
	for (i = 0; i < 10; i++)
	{
		if (x == charset[i])
		{
			return (codes[i % 5]);
		}
	}
	return (x);
}

/**
 * leet - What is this
 * @s: String to encode
 *
 * Return: Encoded string
 */

char *leet(char *s)
{
	char *tmp, *result;
	int s_len;

	tmp = s;
	s_len = 0;
	while (*s != '\0')
	{
		*s = resolver(*s);
		s_len++;
		s++;
	}
	s = tmp;
	result = malloc(s_len * sizeof(char));
	memcpy(result, s, s_len);
	return (result);
}

