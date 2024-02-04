#include "main.h"
#include <stdlib.h>

/**
 * _realloc - eallocates a memory block
 * @ptr:pointer to memory allocated early
 * @old_size: previous size of memoryy allocated
 * @new_size: new size of the memory block
 * Return:pointer to new mem block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);

	if (!p1)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p1[i] = old_p[i];
	}

	if (new_size < old_size)
	{
		for (i = 0; i < old_size; i++)
			p1[i] = old_p[i];
	}
	free(ptr);

	return (p1);
}
