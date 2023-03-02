#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_seperator - Check if the character is a seperator
 * @c: character to be checked
 *
 * Return: 1 if true, 0 false
 */

int is_seperator(char c)
{
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case '.':
		case ';':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		case '\0':
		default:
			return (0);
	}
}
/**
 * cap_string - Capitalizes every starting character of a word
 * @s: Input string
 *
 * Return: Formatted string
 */

char *cap_string(char *s)
{
	int flag, i, str_len;
	char *result,  *tmp;

	tmp = s;
	flag = 0;
	while (*s != '\0')
	{
		if (is_seperator(*s))
		{
			while (is_seperator(*s))
			{
				s++;
				str_len++;
			}
			flag = 1;
		}

		if (flag)
		{
			if ((*s >= 97) && (*s <= 122))
			{
				*s = *s - 32;
			}
		}
		flag = 0;
		s++;
		str_len++;
	}
	result = malloc(str_len * sizeof(char));
	s = tmp;
	for (i = 0; i < str_len; i++)
	{
		result[i] = s[i];
	}
	result[str_len] = '\0';
	return (result);
}
