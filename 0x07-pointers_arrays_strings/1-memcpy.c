#include "main.h"

/**
 * _memcpy - Function that copies n bytes from memory area src to dest
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 * 
 * Return: Pointer destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
