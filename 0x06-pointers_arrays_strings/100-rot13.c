#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];

		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			c += 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			c -= 13;
		}
		s[i] = c;
	}
	return (s);
}
