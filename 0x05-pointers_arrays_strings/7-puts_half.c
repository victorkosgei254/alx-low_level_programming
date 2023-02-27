#include "main.h"

/**
 * puts_half - Function to print second half of input stirng
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int length, i;

	char *copy = str;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	for (i = (length / 2 == 1 ?  1 + length / 2: length / 2); i < length; i++)
	{
		_putchar(copy[i]);
	}
	_putchar('\n');
}
