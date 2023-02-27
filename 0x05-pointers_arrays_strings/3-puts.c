#include "main.h"

/**
 * _puts - Function to print string to stdout
 * @str: String to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
