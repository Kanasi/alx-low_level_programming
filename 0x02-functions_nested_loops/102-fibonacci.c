#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return:0 exit
 */

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
