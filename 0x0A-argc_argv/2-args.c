#include "main.h"

/**
 * main - Program entry point
 * @argc: Number of cli argument count
 * @argv: cli arguments
 *
 * Return: (0) always
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print(argv[i]);
	}
	return (0);
}
