#include "lists.h"

/**
 * free_listint - frees up the memory
 * @head: pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
