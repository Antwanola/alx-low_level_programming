#include "lists.h"
#include <stdio.h>

/**
 * list_len- returns the len of linked list
 * @h: the struxted list who is now a type
 * Return: return size_t
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
