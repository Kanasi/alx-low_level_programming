#include "lists.h"

/**
 * reverse_listint – a function that reverse a linked list
 * @head: double pointer
 * Return: pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_ptr;
	listint_t *ptr;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	old_ptr = *head;
	ptr = (*head)->next;

	while (ptr != NULL)
	{
		(*head)->next = ptr->next;
		ptr->next = old_ptr;
		old_ptr = ptr;
		ptr = (*head)->next;
	}
	*head = old_ptr;

	return (*head);
}
