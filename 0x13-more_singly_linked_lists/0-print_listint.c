#include "lists.h"
#include <stdio.h>


/**
  * Print_listint- Print int
  * @h: the list header
  * Return: size_t
  */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
