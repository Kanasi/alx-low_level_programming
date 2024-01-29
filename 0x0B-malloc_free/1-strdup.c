#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: a string pointer
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(strlen(str) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
