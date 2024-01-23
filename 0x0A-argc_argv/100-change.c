#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min no of coin to make change
 * @argc:count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5] = {25, 10, 5, 2, 1};
	int n;
	int i;
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	n = 0;

	for (i = 0; i < 5; i++)
	{
		c = cents / coins[i];
		n += c;
		cents -= c * coins[i];
	}
	printf("%d\n", n);
	return (0);
}
