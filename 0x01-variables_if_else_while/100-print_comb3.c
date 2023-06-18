#include <stdio.h>
/**
 * main - Function prints two possible combination
 * Return:0 exit program
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 57 || j != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
