#include "main.h"

/**
 * factorial - Function that computes the factorial of a number
 * @n: number to find the factorial
 *
 * Return: Factorial of number
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
