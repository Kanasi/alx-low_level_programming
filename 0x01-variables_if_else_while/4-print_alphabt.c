#include <stdio.h>
#include <stdlib.h>
/**
 * main - A function that prints alphabet except a few
 * Return:0 exit
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		if (C != 'q' && C != 'e')
		{
			putchar(C);
		}
	}
	putchar('\n');
	return (0);
}
