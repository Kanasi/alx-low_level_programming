#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds node to end of list
 * @head: head
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new1, *current1;

	new1 = malloc(sizeof(list_t));

	if (new1 == NULL)
		return (NULL);
	new1->str = strdup(str);

	if (new1->str == NULL)
	{
		free(new1);
		return (NULL);
	}
	new1->len = strlen(str);
	new1->next = NULL;

	if (*head == NULL)
	{
		*head = new1;
		return (new1);
	}
	current1 = *head;

	while (current1->next != NULL)
		current1 = current1->next;
	current1->next = new1;
	return (new1);
}
