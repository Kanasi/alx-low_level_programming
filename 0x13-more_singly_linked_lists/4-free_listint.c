#include "lists.h"

/**
 * free_listint - function frees the list
 * @head: pointer to head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n);
	}
}
