#include <stdio.h>
#include <main.h>

/**
 * _puts_recursion - function puts string to output;
 * @s: string;
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
