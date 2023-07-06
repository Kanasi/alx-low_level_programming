#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *c = s;
	int i = 0;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*c)
	{
		for (i = 0; rot1[i]; i++)
		{
			if (*c == rot1[i])
			{
				*c = rot2[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
