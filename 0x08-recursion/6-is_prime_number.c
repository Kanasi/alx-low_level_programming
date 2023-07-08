#include "main.h"

int prime_number(int n, int i);

/**
 * is_prime_number - function determines if number is prime
 * @n: integer
 * Return: returns 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - calculate if number is prime
 * @n: number
 * @i: iterator
 * Return: 1 if n is prime and 0 else
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number);
}
