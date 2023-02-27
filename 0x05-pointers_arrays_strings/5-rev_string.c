#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int len, i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	char newString[len + 1];

	newString[len + 1] = '\0';
	for (i = 0; i <= len; i++)
	{
		newString[i] = *s--;
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = newString[i];
	}
}
