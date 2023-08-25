#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	int count = 0;

	if (!str)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if(!new_node)
	return (NULL);
	
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;
	count;
	*str++;

	return (new_node);

}
