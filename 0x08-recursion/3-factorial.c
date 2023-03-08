#include "main.h"

/**
 * factorial - Function that computes the factorial of a number
 * @n: number to find the factorial
 *
 * Return: Factorial of number
 */

int factorial(int n)
{
	int result;

	result = 1;
	if (n < 1)
	{
		return (result);
	}
	result *= factorial(n - 1);
}
