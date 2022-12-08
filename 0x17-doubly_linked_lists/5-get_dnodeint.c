#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a list
 * @head: pointer to the head
 * @index: nth
 *
 * Return: nth node of a list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
