#include "main.h"

/**
 * print_square - prints square shape
 * @size: size of the square
 */

void print_square(int size)
{
	int m, n;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
