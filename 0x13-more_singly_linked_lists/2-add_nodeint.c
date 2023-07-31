#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: double pointer to head
 * @n: value of new node
 * Return: address of the new element, or NULL else
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 =  (listint_t *)malloc(sizeof(listint_t));

	if (node1 == NULL)
	{
		return (NULL);
	}

	 node1->n = n;
	 node1->next = *head;
	*head = node1;

	return (node1);
}
