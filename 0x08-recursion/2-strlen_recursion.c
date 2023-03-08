#include "main.h"
#include <stdio.h>

/**
 * str_checker - Helper function
 * @s: string in
 * @n: index count
 *
 * Return: inte
 */
int str_checker(char *s, int n)
{
	if (*s != '\0')
	{
		return (str_checker(s + 1, n + 1));
	}
	return (n);
}
/**
 * _strlen_recursion - Function to find the length of a string
 * @s: string to find length
 *
 * Return: Length of string
 */

int  _strlen_recursion(char *s)
{
	return (str_checker(s, 0));
}
