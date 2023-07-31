#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head
 * @index: index of node
 * Return: NULL if node absent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;

	while (node != NULL && i != index)
	{
		i++;
		node = node->next;
	}
	if (i == index)
		return (node);

	return (NULL);
}
