#include <stdio.h>
#include "lists.h"

/**
  * print_listint- Print int
  * @h: the list header
  * Return: size_t
  */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
		printf("%d\n", h->n);
	}

	return (i);
}
