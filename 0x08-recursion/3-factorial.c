#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: factorial
 * Return:0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
