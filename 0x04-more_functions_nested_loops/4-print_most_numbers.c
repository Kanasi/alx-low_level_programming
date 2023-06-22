#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		while (i != 52 && i != 50)
		{
			_putchar('i');
		}
	}
	_putchar('\n');
}
