#include "main.h"
#include <stdlib.h>
/**
 * rev_string - Function that reverses a string
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int len, i;
	char *newString;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	newString = alloca(len);

	for (i = 0; i <= len; i++)
	{
		newString[i] = *s--;
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = newString[i];
	}
}
