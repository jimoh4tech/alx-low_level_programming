#include "lists.h"

/**
 * pop_listint - pop the top element
 * @head: pointer to the head pointer
 *
 * Return: the @n of the popped node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
