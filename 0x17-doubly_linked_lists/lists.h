#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct List- create a structured list
 * @n: the number within a list
 * @prev: the pointer to point back
 * @next: the pointer to point forward
 */
typedef struct List
{
	int n;
	struct List *next;
	struct List *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
#endif

