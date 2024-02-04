#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function checks if memory has been allocated
 * @b: unsigned int
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
