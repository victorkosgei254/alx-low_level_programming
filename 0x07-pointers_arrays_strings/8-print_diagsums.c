#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that print sum of 2 diags of a matrix
 * @a: Matrix, square matrix
 * @size: Matrix dimensions
 */

void print_diagsums(int *a, int size)
{
	int i, sum_one, sum_two;

	sum_one = 0, sum_two = 0;
	for (i = 0; i < size; i++)
	{
		sum_one += a[(i * size) + i];
		sum_two += a[(i * size) + (size - i - 1)];
	}
	printf("%d, %d\n", sum_one, sum_two);
}
