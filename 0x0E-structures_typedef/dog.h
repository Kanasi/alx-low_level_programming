#ifndef DOG_H
#define DOG_H
/**
 * struct dog - has three elements
 * @name: first member
 * @owner: second member
 * @age: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
