#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *add_nodeint- add node
  *@head: node head
  *@n: node int
  *Return: listint_t
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
