#include "main.h"
/**
 * _strspn - get len of prefix substring
 * @s: string
 * @accept: prefix
 * Return:bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
