#include "lists.h"
#include <stdio.h>


/**
  * listint_len- length of struct
  * @h: the header
  * Return: size_t
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
