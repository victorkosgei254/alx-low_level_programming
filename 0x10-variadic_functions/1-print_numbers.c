#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - Variadic function pring number
 * @seperator: string to be printed
 * @n: number of variadics
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
