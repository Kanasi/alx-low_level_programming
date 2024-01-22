#include "main.h"
/**
 * _isalpha - checks if upercase or lower
 * @c: character
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
