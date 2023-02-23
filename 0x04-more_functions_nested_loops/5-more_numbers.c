#include "main.h"

/**
 * more_numbers - Print more numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 14; i++)
	{
		for (j = 48; j < 59; j++)
		{
			_putchar(j);
		}
		for (j = 48; j < 53; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
