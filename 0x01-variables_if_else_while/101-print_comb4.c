#include <stio.h>
/**
 * main - function prints combination of 3 possible numbers
 * Return:0 end program
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 55; k++)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 57 || j != 56 || k != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
