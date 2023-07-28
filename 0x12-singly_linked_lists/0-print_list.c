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
	int num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		num++;
	}
	return (num);
}
