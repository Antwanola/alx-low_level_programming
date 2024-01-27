#include "lists.h"
/**
 * dlistint_len - returns count of all element
 * @h: the list
 * Return: returns the number of elem in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
