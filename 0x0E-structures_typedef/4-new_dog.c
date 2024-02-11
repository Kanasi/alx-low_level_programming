#include <stdlib.h>
#include "dog.h"

/**
 * cpystr - duplicates a string
 * @s: the string
 * Return: pointer to duplicate
 * ?
 */

char *cpystr(char *s)
{
	int len = 0;
	char *n;

	if (s == NULL)
		return (NULL);
	while (*s++)
		len++;
	n = malloc(sizeof(char) * (len + 1));
	if (!n)
		return (NULL);
	for (len++; len--;)
		n[len] = *--s;
	return (n);
}

/**
 * new_dog - creates a new dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	d->name = cpystr(name);
	if (name && !d->name)
		return (free(d), NULL);
	d->owner = cpystr(owner);
	if (owner && !d->owner)
		return (free(d->name), free(d), NULL);
	d->age = age;
	return (d);
}
