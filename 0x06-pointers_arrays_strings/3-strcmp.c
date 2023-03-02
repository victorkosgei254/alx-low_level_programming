#include "main.h"

/**
 * _strcmp - Function to compare 2 strings
 * @s1: String one
 * @s2: String two
 *
 * Return: int difference of two stings
 */

int _strcmp(char *s1, char *s2)
{
	int flag;

	flag = 0;
	while ((*s2 != '\0') || (*s1 != '\0'))
	{
		if (*s2 != *s1)
		{
			flag = *s1 - *s2;
			break;
		}
		s2++, s1++;
	}
	return (flag);
}
