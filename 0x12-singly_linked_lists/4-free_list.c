#include "lists.h"

/**
 * free_list - frees memory space of singly linked list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
