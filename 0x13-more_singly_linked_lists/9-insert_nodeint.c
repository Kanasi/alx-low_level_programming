#include "lists.h"

/**
 * insert_nodeint_at_index -function inserts new node
 * @idx: index where new node to be added
 * @head: pointer to the head
 * @n: value to be added
 * Return: address of new node, or NULL else
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node1, *temp;

	node1 = (listint_t *)malloc(sizeof(listint_t));

	if (node1 == NULL)
		return (NULL);

	node1->n = n;

	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
		return (node1);
	}

	temp = *head;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(node1);
		return (NULL);
	}
	node1->next = temp->next;
	temp->next = node1;
	return (node1);
}
