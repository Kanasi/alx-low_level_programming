#include <stdio.h>
/**
 * main - function prints lowercase alphabet in reverse
 * Return:0 exit
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
