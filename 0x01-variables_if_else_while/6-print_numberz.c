#include <stdio.h>
/**
 * main - prints numbers using function putchar
 * Return:0 exit
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar("%d", i);
	}
	putchar("\n");
	return (0);
}
