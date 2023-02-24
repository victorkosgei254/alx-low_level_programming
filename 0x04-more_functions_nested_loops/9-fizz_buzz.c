#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - Fizz buzz task
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5 == 0) && (i % 3 != 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else
		{
		printf("%d ", i);
		}
	}
}

/**
 * main - entry point
 *
 * Return: 0 Success
 */

int main(void)
{
	fizz_buzz();

	return (0);
}
