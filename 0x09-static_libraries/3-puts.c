#include "main.h"
#include <stdlib.h>
/**
 * _puts - function just like printf
 * @s:string
 * Return:string
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
