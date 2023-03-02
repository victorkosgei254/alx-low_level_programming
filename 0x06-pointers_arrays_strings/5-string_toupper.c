#include "main.h"
#include <stdlib.h>

/**
 * string_toupper - Function that convert given string to uppercase
 * @s: Input string
 *
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	char *result, *s_copy;
	int s_len, i;

	s_copy = s;
	s_len = 0;
	while (*s_copy != '\0')
	{
		s_len++;
		s_copy++;
	}
	result = malloc(s_len * sizeof(char));
	for (i = 0; i < s_len; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
			result[i] = s[i];
		}
		else
		{
			result[i] = s[i];
		}
	}
	return (result);
}
