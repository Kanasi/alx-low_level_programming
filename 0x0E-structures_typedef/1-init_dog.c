#include "dog.h"

/**
 * init_dog - function that initialize a variable
 * @d: pointer to struct dog
 * @name: 1st member
 * @owner: 2nd member
 * @age: 3rd member
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
