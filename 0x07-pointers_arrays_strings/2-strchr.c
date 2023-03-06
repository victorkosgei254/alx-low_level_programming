#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate a character and returns its position
 * @s: String to locate character
 * @c: Character to be located
 *
 * Return: Pointer to the first occurance
 */

char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
	{
		s++;
	}
	if (*s == '\0')
	{
		return (NULL);
	}
	return (s);
}
