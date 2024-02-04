#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of int
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	p = malloc(sizeof(int) * k);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
