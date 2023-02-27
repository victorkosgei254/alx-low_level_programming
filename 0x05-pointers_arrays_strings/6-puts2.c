#include "main.h"

/**
 * puts2 - Print every other character of a string
 * @str: String to print
 */

void puts2(char *str)
{
	int length, i;

	length = 0;
	while (*str != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(*str);
		}
		length++;
		str++;
	}
	_putchar('\n');
}
