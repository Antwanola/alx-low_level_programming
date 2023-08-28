#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2- free lists
  * @head: te list head
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
