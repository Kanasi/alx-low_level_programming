#include "main.h"

/**
 * _isupper - function checks for upercase character
 * @c: character to be checked
 * Return:1 if uppercase or 0 otherwise
 */
int _isupper(int c);
{
	char c;

	while (c = 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
