#include "lists.h"
/**
 * add_dnodeint_end- add node to the end of list
 * @head: the list head
 * @n: the value to be added
 * Return the added value in the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	temp = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else {
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		new_node->n = n;
		new_node->prev = temp;
		new_node->next = NULL;
		temp->next = new_node;
	}
	return (new_node);
}
