#include <stdio.h>

/**
 * main - lists natural numbers below 1024
 * Return:0 exit
 */

int main(void)
{
	int a, sum = 0;

		for (a = 0; a < 1024; a++)
		{
			if ((a % 3) == 0 || (a % 5) == 0)
				sum += a;
		}
	printf("%d\n", sum);
	return (0);
}
