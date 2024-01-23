#include <stdio.h>
/**
 * main - print no of arguments
 * @argc: no of argument
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
