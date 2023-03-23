#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - Function to print a list of all args
 * @format: list of types of arguments passed 
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	while (*format != '\0')
	{
		switch(*format)
		{
			case 'c':
				printf("%c", va_arg(ap, char));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				break;
			case 'f':
				printf("%f", va_arg(ap, float));
				break;
			default:
				continue;
		}
		format++;
	}
	va_end(ap);
}
