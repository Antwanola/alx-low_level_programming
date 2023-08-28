#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * add_nodeint_end- this adds to the end of list
  * @head: the head
  * @n: the int
  * Return: listint_t
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
