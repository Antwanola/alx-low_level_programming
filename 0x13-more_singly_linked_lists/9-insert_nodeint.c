#include "lists.h"
#include <stdlib.h>


/**
  * insert_nodeint_at_index- inset node at index
  * @head: node haed
  * @idx: node index
  * @n: node int
  * Return: listint_t
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *new_list;
	unsigned int i = 0;

	if (!*head)
		return (NULL);

	new_list = (listint_t *)malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;
	temp = *head;

	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
	}
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new_list->next = temp->next;
			temp->next = new_list;
			return (new_list);
		}
		else
			temp = temp->next;
		i++;
	}
	return (NULL);
}
