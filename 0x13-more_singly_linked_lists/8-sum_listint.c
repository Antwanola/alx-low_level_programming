#include "lists.h"


/**
  * sum_listint- sum the list
  * @head: the head
  * Return: int sum
  */


int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}


