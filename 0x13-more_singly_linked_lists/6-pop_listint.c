#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint- remove list
  * @head: head of list
  * Return: int
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int digit;

	if (!head || !*head)
		return (0);

	digit = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (digit);
}
