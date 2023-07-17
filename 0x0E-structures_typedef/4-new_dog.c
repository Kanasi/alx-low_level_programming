#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 *
 * Return: pointer to new dog if succes and NULL if otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1 = (dog_t *)malloc(sizeof(dog_t));

	if (dog1 == NULL)
	{
		return (NULL);
	}

	dog1->name = (char *)malloc(strlen(name) + 1);
	dog1->owner = (char *)malloc(strlen(owner) + 1);

	if (dog1->name == NULL || dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1->owner);
		free(dog1);

		return (NULL);
	}

	strcpy(dog1->name, name);
	strcpy(dog1->owner, owner);
	dog1->age = age;

	return (dog1);
}
