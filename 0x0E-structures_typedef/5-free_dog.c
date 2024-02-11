#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory from struct dog
 * @d:pointer to struct d
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
