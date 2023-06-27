#include "main.h"

/**
 * _strcpy - copies string from pointer src to dst
 * @dest: first member
 * @src: second member
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	*(dest + a) = '\0';
	return (dest);
}
