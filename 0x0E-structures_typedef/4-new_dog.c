#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Function to create a new dog
 * @name: Dogs name
 * @age: Dog's age
 * @owner: Dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
