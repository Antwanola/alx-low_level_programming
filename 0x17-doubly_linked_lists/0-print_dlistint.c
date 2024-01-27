#include "lists.h"
/**
 * print_dlistint- prints and returns element in list
 * @h: the list
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	int t = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		t++;
	}
	return (t);
}

