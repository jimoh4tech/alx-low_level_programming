#include "lists.h"

/**
 * list_len - calculate the length of a singly linked list
 * @h: pointer to the header
 *
 * Return: size of the list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
