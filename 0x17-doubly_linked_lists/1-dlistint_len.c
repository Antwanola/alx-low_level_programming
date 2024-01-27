#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
