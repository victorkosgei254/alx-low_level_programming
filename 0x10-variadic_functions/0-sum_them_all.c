#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function that returns sums
 * @n: numbers to be summed
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_list(ap, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(ap, int);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
