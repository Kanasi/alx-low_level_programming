#include "main.h"
/**
 * _memset-program fills block of memory with specific value
 * @s:address of memory
 * @b:value
 * @n:no of bytes
 * Return:new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
