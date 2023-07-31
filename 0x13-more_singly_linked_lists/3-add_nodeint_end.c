#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: double pointer to head
 * @n: value of new node
 * Return: address to the new element, NULL else
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1, *current;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	node1 = (listint_t *)malloc(sizeof(listint_t));

	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (current)
		current->next = node1;
	else
		*head = node1;
	return (node1);
}
