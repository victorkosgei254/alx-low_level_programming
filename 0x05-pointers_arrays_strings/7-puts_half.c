#include "main.h"

/**
 * puts_half - Function to print second half of input stirng
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int length, i;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	for (i = 0; i <= length; i++)
	{
		str--;
	}
	for (i = 1 + length / 2; i <= length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
