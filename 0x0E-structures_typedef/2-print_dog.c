#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints dog
 * @d: dog's struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
		return;
	}
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
