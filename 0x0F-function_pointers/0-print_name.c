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
	if (name != NULL && f != NULL)
		f(name);
}
