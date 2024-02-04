#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: no of xters to concatenate
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		result[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		result[len++] = s2[i];

	result[len] = '\0';

	return (result);
}
