#include "main.h"

/**
 * print_diagonal - prints diagnal line
 * @n: no of lines
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			} else
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
