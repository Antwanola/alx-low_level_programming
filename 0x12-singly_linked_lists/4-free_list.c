#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"



/**
 * free_list- free memory for struct list_t
 * @head: header address
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
