#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * new_dog - Function to create a new dog
 * @name: Dogs name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: a dog instance
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int name_len, owner_len;

	name_len = strlen(name), owner_len = strlen(owner);
	dog = malloc(sizeof(struct dog));
	dog->name = malloc((name_len + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		return (NULL);
	}
	dog->age = age;
	dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		return (NULL);
	}
	memcpy(dog->name, name, name_len);
	memcpy(dog->owner, owner, owner_len);
	return (dog);
}
