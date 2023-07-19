#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints string
 * @name: pointer to string name
 *
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
