#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


void free_listint(listint_t *head)
{
	free(head);
}
