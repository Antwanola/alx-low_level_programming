#include "lists.h"

/**
  * get_nodeint_at_index- get node where index is
  * @head: node head
  * @index: node index
  * Return: listint_t
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *nth = NULL;

	while (head != NULL)
	{
		i++;
		if (i == index)
		{
			nth = head;
		}
		head = head->next;
	}
	return (nth);
}
