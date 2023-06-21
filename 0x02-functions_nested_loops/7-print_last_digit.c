#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: last digit
 * @i: number to be determined
 */

int print_last_digit(int i)
{
	int last;

	if (i < 0)
		i = -i;
	last = i % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
