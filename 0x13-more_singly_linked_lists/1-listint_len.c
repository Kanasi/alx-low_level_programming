#include "lists.h"

/**
 * listint_len - determine the number of elements in a list
 * @h: pointer to head
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t  count = 0;

	while (h != 0)
	{
		count++;

		h = h->next;
	}
	return (count);
}
