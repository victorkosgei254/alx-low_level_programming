#include "main.h"

/**
 * _strlen_recursion - Function to find the length of a string
 * @s: string to find length
 *
 * Return: Length of string
 */

int  _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s != '\0')
	{
		count += _strlen_recursion(s++);
	}
	return (count);
}
