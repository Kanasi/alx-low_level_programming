#include "main.h"
/**
 * print_line - prints straight line
 * @n: no of times to print line
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
