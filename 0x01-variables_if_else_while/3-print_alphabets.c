#include <stdlib.h>
#include <stdio.h>
/**
 * main - A function that prints alphabets in lower and upercase
 * Return:0 exit program
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
