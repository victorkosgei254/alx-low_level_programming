#include "main.h"

/**
 * _isupper - Function to check if its upper
 * @c: input
 *
 * Return: 0 if not upper, 1 if upper
 */
int _isupper(int c)
{
	if (!((c > 64) && (c < 91)))
	{
		return (0);
	}
	return (1);
}
