#include "main.h"

/**
 * checker - resursive helper function
 * @index: half the input number
 * @n: number to be checked
 *
 * Return: 0 false, 1, true
 */

int checker(int index, int n)
{
	if (index < 2)
	{
		return (0);
	}
	else if (index == 2)
	{
		return (1);
	}
	else if (n % index != 0)
	{
		return (checker(index - 1, n));
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - Function to check for prime number
 * @n: Number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (checker(n / 2, n));
}
