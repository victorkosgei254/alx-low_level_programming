#include "main.h"
#include <stdlib.h>

/**
 * _memset - Function that fills first n bytes with byte constant
 * @s: memory area to be filled
 * @b: Byte to be filled
 * @n: number of bytes to be filled.
 *
 * Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *s_copy;

	s_copy = s;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s_copy);
}
