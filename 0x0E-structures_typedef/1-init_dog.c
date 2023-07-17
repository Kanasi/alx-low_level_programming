#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function initialize a variable type
 * @d: struct
 * @name: first member
 * @age: second member
 * @owner: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
