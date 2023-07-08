#include "main.h"

int _strlen_recursion(char *s);
int palind(char *s, int i, int len);

/**
 * is_palindrome - function return 1 if string is a palindrome and 0 ele
 * @s: string
 * Return: 1 if palindrome and 0 else
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palind(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function returns len of string
 * @s: string
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palind - function checks characters recursively for palindrome
 * @s: string
 * @i: iterate
 * @len: length of string
 * Return: 1 if palindrome, 0 else
 */
int palind(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palind(s, i + 1, len - 1));
}
