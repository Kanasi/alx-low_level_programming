#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initialize a variable type
 * @d: pointer to struct var
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: void
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
