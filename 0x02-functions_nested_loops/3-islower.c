#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: first member
 * Return:1 if lower or 0 if not lower
 */

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
