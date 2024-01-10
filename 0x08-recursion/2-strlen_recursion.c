#include "main.h"

/**
 * _strlen_recursion - function returns length of string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len = len + 1);
	}
	return (0);
}
