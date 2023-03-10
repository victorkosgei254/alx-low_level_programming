#include "main.h"

/**
 * main - entry point
 * @argc: number of cli arguments
 * @argv: clie arguments
 *
 * Return: (0) always
 */

int main(int argc, char **argv)
{
	int x;

	if (argc < 3)
	{
		print("Error");
		return (1);
	}
	x = str_toint(argv[1]) * str_toint(argv[2])
	print_num(x);
	return (0);
}
