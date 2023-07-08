#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function returns square rooot of a number
 * @n: int to find square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - function helps su function
 * @n: first member
 * @i: second member
 * Return: square root of number
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
