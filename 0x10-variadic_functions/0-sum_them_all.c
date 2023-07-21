#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all integer a\passed
 *
 * @n: no of arguments to be passed
 *
 * Return: o if no arguments else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list argument;

	va_start(argument, n);

	for (i = 0; i < n; i++)
		result += va_arg(argument, int);
	va_end(argument);
	return (result);
}
