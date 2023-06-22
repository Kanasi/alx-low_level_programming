#include "main.h"

/**
 * times_table - prints 9 times table
 */

void times_table(void)
{
	int x, y, t;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			t = x * y;

			if (y == 0)
			{
				_putchar(t + '0');
			}
			if (t < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			} else if (t >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
