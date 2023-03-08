#include "main.h"

/**
 * _pow_recursion - Computes the power of a number
 * @x: number to find the power
 * @y: number of times to raise the number
 *
 * Return: power of the given number
 */

int _pow_recursion(int x, int y)
{
	int result;

	result = 1;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (result);
	}
	else
	{
		result = x;
	}
	result *= _pow_recursion(x, y - 1);
	return (result);
}
