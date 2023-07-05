#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @c: string to encode
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == c[i])
				c[i] = b[j];
		}
	}
	return (c);
}
