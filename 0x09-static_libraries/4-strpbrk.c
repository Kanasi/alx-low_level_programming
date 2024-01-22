#include "main.h"
/**
 * _strpbrk - search a string for any set of bytes
 * @s: string
 * @accept: set of bytes
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return ('\0');
}
