#include "main.h"
#include <stdio.h>

/**
 * argstostr - funtion that concates cli args
 * @ac: number of cli arguments
 * @av: clie arguments
 *
 * Return: String
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i;

	s = str_concat(av[0], "\n");
	for (i = 1; i < ac; i++)
	{
		s = str_concat(s, av[i]);
		s = str_concat(s, "\n");
	}
	return (s);
}
