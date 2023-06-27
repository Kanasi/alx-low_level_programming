#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	b = 0;
	b = a / 2;
	if (a / 2 != 0)
	{
		b++;
	}
	while (str[b] != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
