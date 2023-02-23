#include "main.h"

/**
 * _isdigit - Check if is digit
 * @c: number to be checked
 *
 * Return: 0 if not, 1 if is
 */
int _isdigit(int c)
{
	if (!((c > 47) && (c < 58)))
	{
		return (0);
	}
	return (1);
}
