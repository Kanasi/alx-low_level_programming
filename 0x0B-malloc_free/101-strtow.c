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
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			count++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (count == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, k = i; current < count; i++, len = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			len++;
		ptr[current] = malloc(sizeof(char) * len + 1);
		if (!ptr[current])
		{
			while (current-- >= 0)
				free(ptr[current]);
			free(ptr);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			ptr[current][n] = *(str + i);
		ptr[current][n] = '\0';
	}
	ptr[count] = NULL;
	return (ptr);
}
