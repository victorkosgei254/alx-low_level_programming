#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free the memory reserverd for specific dog object
 * @d: pointer to dog object
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
