#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new node at beggining of list
 * @head: has address of first node
 * @str: the string
 * Return: address of new element or NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	if (head == NULL || str == NULL)
		return (NULL);

	add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);

	if (add_node->str == NULL)
	{
		free(add_node);
		return (NULL);
	}

	add_node->len = strlen(str);
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
