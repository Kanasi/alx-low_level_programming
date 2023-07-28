#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements in thelist
 * @h: pointer to head list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str != NULL)
			printf("%s", h->str);
		else
			printf("(nil)");

		printf("\n");

		h = h->next;
		node_count++;
	}
	return (node_count);
}
