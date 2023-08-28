#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint- free list
  * @head: the list head
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
