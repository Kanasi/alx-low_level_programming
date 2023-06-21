#include "main.h"
/**
 * jack_bauer - prints every minute
 */

void jack_bauer(void)
{
	int h, m;

	while (h < 24)
	{
		h = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
