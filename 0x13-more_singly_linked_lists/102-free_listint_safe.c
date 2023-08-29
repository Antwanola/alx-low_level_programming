#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a linked list
 * @h: the head
 * Return: size_t
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
