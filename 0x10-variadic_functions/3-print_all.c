#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: type of argument passed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int = 0;
	char c;
	char *s;
	float f;
	int n;

	va_start(arguments, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(arguments, int), printf("%c", c);
				break;
			case 'i':
				n = va_arg(arguments, int), printf("%d", n);
				break;
			case 'f':
				f = (float) va_arg(arguments, double), printf("%f", f);
				break;
			case 's':
				s = va_arg(arguments, char *), printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
				i++;
				continue;
		}

		if (formt[i + 1] != '\0')
		{
			char *separate = ", ";

			printf("%s", separate);
		}
		i++;
	}
	va_end(arguments), printf("\n");
}
