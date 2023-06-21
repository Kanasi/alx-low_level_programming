#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: first member
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	} else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
