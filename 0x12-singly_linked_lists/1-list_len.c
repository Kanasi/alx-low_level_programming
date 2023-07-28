#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
