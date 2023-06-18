#include <stdio.h>
/**
 * main - prints numbers using function putchar
 * Return:0 exit
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
