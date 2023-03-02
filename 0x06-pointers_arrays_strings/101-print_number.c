#include "main.h"

/**
 * reverse_number - reverses the number
 * @n: number to be reversed
 *
 * Return: number in reversed
 */

int reverse_number(int n)
{
	int num;

	num = 0;
	while (n)
	{
		num = num +  n % 10;
		n = (n - n % 10) / 10;
		num = n == 0 ? num : num * 10;
	}
	return (num);
}
/**
 * print_number - Function that prints number
 * @n: number to print
 */

void print_number(int n)
{
	int last_digit, reversed_number;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	else if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	reversed_number = reverse_number(n);
	while (reversed_number)
	{
		last_digit = reversed_number % 10;
		reversed_number = (reversed_number - reversed_number % 10) / 10;
		_putchar(last_digit + '0');
	}
}
