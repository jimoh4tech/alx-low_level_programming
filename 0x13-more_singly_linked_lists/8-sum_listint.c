#include "lists.h"

/**
 * sum_listint - sums all the node value in the list
 * @head: pointer to the head
 *
 * Return: sum of all the node value
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
