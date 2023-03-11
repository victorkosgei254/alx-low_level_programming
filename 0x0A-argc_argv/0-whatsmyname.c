#include "main.h"

/**
 * main - program entry pointy
 * @argc: number of arguments count
 * @argv: argument values arrays
 *
 * Return: (0) always
 */

int main(int argc, char **argv)
{
	if (argc == 0)
	{
		return (-1);
	}
	print(argv[0]);
	return (0);
}
