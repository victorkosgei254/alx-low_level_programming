#include "main.h"

/**
 * print_rev - Function that prints a stirng in reverse
 * @s: String to be printed in reverse
 */

void print_rev(char *s)
{
	int length, i;

	char *copy = s;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(copy[i]);
	}
	_putchar('\n');
}
