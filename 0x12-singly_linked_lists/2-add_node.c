#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node- Add data to link head
 * @head: the head of link
 * @str: string to be added
 * Return: list_t type data address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	int count = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
