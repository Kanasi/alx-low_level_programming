#include <stdio.h>
#include "dog.h"

/**
 * copystring - function that copy string
 * @src: source
 * @dest: destination
 * Return: copied string
 */

char *copystring(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * length - function calculates length of string
 * @s: string to find length
 * Return: length of string
 */

int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - function creates a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: new dog if success and null otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int l1, l2;

	l1 = length(name);
	l2 = length(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (l1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	copystring(newdog->name, name);
	copystring(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
