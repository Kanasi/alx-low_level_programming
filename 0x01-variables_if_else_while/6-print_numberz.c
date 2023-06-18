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
		char num = i + '0';

		putchar(num);
	}
	putchar("\n");
	return (0);
}
