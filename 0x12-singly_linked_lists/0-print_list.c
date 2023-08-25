#include "lists.h"
#include <stdio.h>


size_t print_list(const list_t *h)
{
	size_t count = 0`;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s", count, h->str);
		}
		h = h->next;
		count++;
	}
}
