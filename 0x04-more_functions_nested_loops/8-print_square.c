#include "main.h"

/**
 * print_square - prints square
 * @n: length of square
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
