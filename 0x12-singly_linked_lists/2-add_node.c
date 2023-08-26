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
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	if (!*head)
	{
		return (NULL);
	}
	else
		return (*head);
}
