#ifndef DOG_H
#define DOG_H
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - contains details of dog
 * @name: first member
 * @age: seccond member
 * @owner: third member
 * Return: always 0
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
