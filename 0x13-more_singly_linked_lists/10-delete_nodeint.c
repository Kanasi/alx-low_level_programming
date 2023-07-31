#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @index: index of node to be deleted
 * @head: pointer to head
 * Return: 1 on success, -1 else
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *node, *oldnode;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	oldnode = node;
	node = node->next;
	for (i = 1; i < index; i++)
	{
		if (node == NULL)
			return (-1);
		oldnode = node;
		node = node->next;
	}
	oldnode->next = node->next;
	free(node);
	return (1);
}
