#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all args
 * @ac:first arg
 * @av:second arg
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	ptr = malloc(sizeof(char) * l + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			ptr[r] = av[i][n];
			r++;
		}
		if (ptr[r] == '\0')
		{
			ptr[r++] = '\n';
		}
	}
	return (ptr);
