#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - Function that prints string with formatted seperator
 * @seperator: Seperator between strings
 * @n: Number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *data;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		data = va_arg(ap, char *);
		if (data == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", data);
		}
		if (seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(ap);
	printf("\n");
}

