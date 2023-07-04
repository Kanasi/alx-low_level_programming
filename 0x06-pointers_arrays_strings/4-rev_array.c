#include "main.h"
/**
 * reverse_array - reverse array
 * @a: an array of integers
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		b = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
