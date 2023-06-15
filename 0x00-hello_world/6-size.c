#include <stdio.h>
/**
 * main - A program that prints size of types using sizeof function
 * Return:0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int j;
	long long int k;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(k));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
