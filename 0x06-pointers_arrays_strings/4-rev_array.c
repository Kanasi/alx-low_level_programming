#include "main.h"
/**
 * reverse_array - reverse array
 * @a: an array of integers
 * @n: number of elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;

		i++;
		j--;
	}
}
