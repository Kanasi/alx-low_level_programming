#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest:destination
 * @src:source
 * @n: number of bytes
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
