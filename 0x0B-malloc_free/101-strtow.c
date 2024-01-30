#include "main.h"
#include <stdlib.h>
/**
 * strtow - split a string into words
 * @str: string
 * Return: pointer to array of stringsa or null when failure
 */

char **strtow(char *str)
{
	char **ptr;
	int i, k, n, count = 0, len = 0, current = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			count++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		if (!str[i])
			break;
	}

	if (count == 0)
		return (NULL);

	for (i = 0, current = 0; current < count; i++)
	{

		while (str[i] == ' ')
			i++;

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;

		ptr[current] = malloc(sizeof(char) * (len + 1));
		if (!ptr[current])
		{
			while (current > 0)
				free(ptr[--current]);
			free(ptr);
			return (NULL);
		}

		for (n = 0; n < len; n++)
			ptr[current][n] = str[i + n];

		ptr[current][n] = '\0';

		current++;
		i += len;
	}
	ptr[count] = NULL;
	return (ptr);
}
