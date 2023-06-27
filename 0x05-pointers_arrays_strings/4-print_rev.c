#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (b = a - 1; b >= s[a]; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
