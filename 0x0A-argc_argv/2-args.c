#include <stdio.h>
/**
 * main - print all command line arg
 * @argc: no of arg
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
