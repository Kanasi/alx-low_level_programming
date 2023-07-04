#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: no of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	*ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (src != '\0' && n > 0)
	{
		*ptr = *scr;
		ptr++;
		src++;
		n++;
	}
	*ptr = '\0';
	return (dest);
}
