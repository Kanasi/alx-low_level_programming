#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints lowercase alphabet
 * Return:0
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar("%c");
		putchar("\n");
	}
	return (0);
}
