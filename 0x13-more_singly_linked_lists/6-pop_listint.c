#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer head
 * Return: 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *main;
	int n;

	main = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(main);

	return (n);
}
