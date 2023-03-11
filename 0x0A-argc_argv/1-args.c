#include "main.h"

/**
 * main - Entry point
 * @argc: number of commandline arguments
 * @argv: command line arginments
 *
 * Return: (0) always
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	argc = argc - 1;
	_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
