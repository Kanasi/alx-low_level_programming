#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse;
 * @s: string
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
