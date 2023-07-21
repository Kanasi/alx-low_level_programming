#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function prints string
 * @separator: separates strings
 * @n: number of strings to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	char *str;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);
		printf("%s", str != NULL ? str : "(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arguments);
	printf("\n");
}
