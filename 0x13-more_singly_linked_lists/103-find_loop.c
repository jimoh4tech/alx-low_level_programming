#include "lists.h"

/**
 * find_listint_loop - address of the loop
 * @head: pointer to the head
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	if (head == NULL)
		return (NULL);

	while (first && second && second->next)
	{
		second = second->next->next;
		first = first->next;

		if (first == second)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}

	return (NULL);
}
