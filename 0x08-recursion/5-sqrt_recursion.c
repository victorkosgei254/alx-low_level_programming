#include "main.h"
#include <stdio.h>
/**
 * sqrt_checker - Helper function
 * @index: Current iteration
 * @n: number to be checked
 *
 * Return: square of n
 */

int sqrt_checker(int index, int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (index * index == n)
	{
		return (index);
	}
	else if (index == n / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_checker(index + 1, n));
	}
}
/**
 * _sqrt_recursion - Find the square-root of a number
 * @n: Number to find the square root
 *
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	return (sqrt_checker(1, n));
}
