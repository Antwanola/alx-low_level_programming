#include "lists.h"
#include <stdio.h>
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
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
