#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: pointer to head
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
