#include "main.h"

/**
 * swap_int - Swaps 2 integers
 * @a: first integer to be swapped
 * @b: second integer to be swapperd
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
