#include "lists.h"

/**
 * free_listint2 - frees memory of a list pointer
 * @head: pointer to the head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	free(*head);
	head = NULL;
}
