#ifndef DOG_H
#define DOG_H
#include <stdio.h>

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *cpystr(char *s);
#endif
