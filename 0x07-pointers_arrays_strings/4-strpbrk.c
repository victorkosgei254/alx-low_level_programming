#include "main.h"
#include <limits.h>
#include <stddef.h>

/**
 * _strpbrk - Locate first occurance of string
 * @s: String to be searched
 * @accept: String to match
 *
 * Return: String matched
 */

char *_strpbrk(char *s, char *accept)
{
	char *s_copy;
	int tmp, lowIndex;

	s_copy = s;
	lowIndex = INT_MAX, tmp = 0;
	while (*accept != '\0')
	{
		while (*s_copy != *accept)
		{
			tmp++;
			if (*s_copy == '\0')
			{
				return (NULL);
			}
			s_copy++;
		}
		if (tmp < lowIndex)
		{
			lowIndex = tmp;
		}
		tmp = 0;
		accept++;
		s_copy = s;
	}
	return (s + lowIndex);
}

