#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at beggining of list
 * @head: has address of first node
 * @str: the string
 * Return: address of new element or NULL otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;

	if (head == NULL || str == NULL)
		return (NULL);

	node1 = malloc(sizeof(list_t));

	if (node1 == NULL)
		return (NULL);

	node1->str = strdup(str);

	if (node1->str == NULL)
	{
		free(node1);
		return (NULL);
	}

	node1->len = strlen(str);
	node1->next = *head;
	*head = node1;

	return (node1);
}
