#include "main.h"
/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: a string pointer
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *ptr;

	if (str == 0)
		return (NULL);
	while (str[i])
		i++;
	ptr = (char *)malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
