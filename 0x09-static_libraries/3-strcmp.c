#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first memer
 * @s2:second member
 * Return:difference of the strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
