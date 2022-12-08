#include "lists.h"

/**
 * free_dlistint - free the address
 * @head: pinter to the address
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
