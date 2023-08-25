#include "lists.h"
#include <stdio.h>

/**
 * print_list- list of struct
 * @h: pointer to the defined struct
 * Return: Returned size_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
