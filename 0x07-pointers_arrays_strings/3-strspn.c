#include "main.h"

/**
 * _strspn - Function that gets the length of prefix substring
 * @s: Initial segment
 * @accept: bytes to check
 *
 * Return: Int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *s_copy;
	int maxIndex, tmp;

	s_copy = s;
	maxIndex = 0, tmp = 1;
	while (*accept != '\0')
	{
		while (*s != *accept)
		{
			s++;
			tmp++;
		}
		if (*s == *accept)
		{
			if (maxIndex < tmp)
			{
				maxIndex = tmp;
			}
			tmp = 1;
			s = s_copy;
			accept++;
		}
		else
		{
			return (0);
		}
	}
	return (maxIndex);
}
