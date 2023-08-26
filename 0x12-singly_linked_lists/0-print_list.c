#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list- list of struct
 * @h: pointer to the defined struct
 * Return: Returned size_t
 */

size_t print_list(const list_t *h)
{
	unsigned int index = 0;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			while (h->str[count] != '\0')
			{
				count++;
				
			}
			printf("[%lu] %s\n", count, h->str);
		}
		h = h->next;
		index++;
	}
	return (index);
}
