#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of the list
 * @head: pointer to the head
 *
 * Return: sum of the ns or 0
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
