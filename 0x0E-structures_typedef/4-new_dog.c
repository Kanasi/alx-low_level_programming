#include "dog.h"
#include <stdlib.h>

int string_len(char *str);
char *copy_string(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * string_len - determines the length of string
 * @str: the string to be measured
 * Return: length of the string
 */
int string_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * copy_string - Copies  string pointed to by src
 * @dest: The buffer storing the string
 * @src: The source string
 * Return: The pointer to dest.
 */

char *copy_string(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);
	dog_1->name = malloc(sizeof(char) * (string_len(name) + 1));
	if (dog_1->name == NULL)
	{
		free(dog_1);
		return (NULL);
	}
	dog_1->owner = malloc(sizeof(char) * (string_len(owner) + 1));
	if (dog_1->owner == NULL)
	{
		free(dog_1->name);
		free(dog_1);
		return (NULL);
	}
	dog_1->name = copy_string(dog_1->name, name);
	dog_1->age = age;
	dog_1->owner = copy_string(dog_1->owner, owner);
	return (dog_1);
}
