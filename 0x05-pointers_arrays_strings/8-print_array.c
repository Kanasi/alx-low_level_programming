#include "main.h"

/**
 * print_array - prints n elements of an arr of int
 * @a: first member
 * @n: second member
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
