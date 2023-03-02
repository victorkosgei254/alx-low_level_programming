#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * reverse_array - Function to reverse an array
 * @a: The array to be reversed
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int *temp, i;

	temp = malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		temp[i] = a[i];
	}
	for (i = n - 1; i >= 0; i--)
	{
		a[i] = temp[(n - 1) - i];
	}
	free(temp);
}
