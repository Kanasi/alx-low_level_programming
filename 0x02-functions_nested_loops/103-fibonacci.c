#include <stdio.h>
/**
 * main - prints the sum of even valued term
 * Return: 0 exit
 */

int main(void)
{
	int a;
	unsigned long int b, c, new, add;

	b = 1;
	c = 2;
	add = 0;

	for (a = 1; a <= 33; a++)
	{
		if (b < 4000000 && (b % 2) == 0;)
		{
			add = add + b;
		}
		new = b + c;
		b = c;
		c = new;
	}
	printf("%lu\n", add);

	return (0);
}
