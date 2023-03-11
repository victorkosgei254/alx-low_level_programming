#include "main.h"
#include <stdlib.h>

/**
 * numberOfCents - Recursion func
 * @amount: Coints submited
 *
 * Return: Minimu number of coins
 */

int numberOfCents(int amount)
{
	if (amount >= 25)
	{
		return ((amount / 25) + numberOfCents(amount % 25));
	}
	else if ((amount >= 10) && (amount < 25))
	{
		return ((amount / 10) + numberOfCents(amount % 10));
	}
	else if ((amount >= 5) && (amount < 10))
	{
		return ((amount / 5) + numberOfCents(amount % 5));
	}
	else
	{
		return (amount);
	}
}
/**
 * main - entry point
 * @argc: command line arg count
 * @argv: commandline argument
 *
 * Return: (1) Error, (0) success
 */

int main(int argc, char **argv)
{
	int coin, cents;

	if (argc > 2)
	{
		print("Error");
		return (1);
	}
	coin = atoi(argv[argc - 1]);
	if (coin < 0)
	{
		print_num(0);
		return (0);
	}
	print_num(numberOfCents(coin));
	return (0);
}
