#include "main.h"

/**
 * more_numbers - Print more numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		for (j = 48; j < 54; j++)
		{
			_putchar(49);
			_putchar(j == 54 ? '\n' : j);
		}
	}
}
