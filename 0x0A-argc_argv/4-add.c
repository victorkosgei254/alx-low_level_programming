#include "main.h"

/**
 * is_digit - check if the character is a digit
 * @c: Character to be checked
 *
 * Return: 1 is a digit, 0 is not
 */

int is_digit(char c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * main - Program entry point
 * @argc: command line argument count
 * @argv: command line arguments
 *
 * Return: (0) success, (1) error
 */

int main(int argc, char **argv)
{
	int results, i;

	results = 0;
	if (argc < 2)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_digit(*argv[i]))
		{
			results += str_toint(argv[i]);
		}
		else
		{
			print("Error");
			return (1);
		}
	}
	print_num(results);
	return (0);
}
