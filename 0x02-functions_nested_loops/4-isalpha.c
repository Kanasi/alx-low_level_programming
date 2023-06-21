#include "main.h"

/**
 * _isalpha - checks if alphabet
 * @c: character checked
 * Return: 1 if c is letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
