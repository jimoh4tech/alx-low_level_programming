#include "lists.h"

/**
 * dlistint_len - calculate the len of items in the list
 * @h: pointer to the head
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
